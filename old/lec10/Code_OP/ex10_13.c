#include "ex10_13.h"

int main(void)
{
  int row = 3;
  int col = 5;
  double arr2d[row][col];
  double average_row[row];
  double average;
  double max;
  
  printf("Please input 3 sets of five double numbers each.\n");
  input_array2d(row, col, arr2d);
  printf("The array is:\n");
  print_array2d(row, col, arr2d);
  
  aver_array2d_row(row, col, arr2d, average_row);
  printf("average of each row:\n");
  print_array1d(average_row, row);
  
  average = aver_array2d(row, col, arr2d);
  printf("average of arr2d is %5.2f\n", average);
 
  max = max_array2d(row, col, arr2d);
  printf("max of arr2d is %5.2f\n", max);
  
  return 0;
}

void input_array2d(int row, int col, double arr2d[row][col])
{
  int r, c;
  for (r = 0; r < row; r++)
    for (c = 0; c < col; c++)
      scanf("%lf", &arr2d[r][c]);
}

void print_array2d(int row, int col, double arr2d[row][col])
{
  int r;
  for (r = 0; r < row; r++)
    print_array1d(arr2d[r], col);
}

void print_array1d(double arr1d[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%8.2f", arr1d[i]);
  putchar('\n');
}


double aver_array1d(double * arr1d, int n)
{
  int i;
  double total = 0.0;
  
  for (i = 0; i < n; i++)
    total += arr1d[i];
  
  return total/(double) n;
}

void aver_array2d_row(int row, int col, double arr2d[row][col],
                      double average[])
{
  int i;
  
  for (i = 0; i < row; i++)
    average[i] = aver_array1d(arr2d[i], col);
}

double aver_array2d(int row, int col, double arr2d[row][col])
{
  int i, j;
  double total = 0.0;
  
  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++)
      total += arr2d[i][j];

  return total/(double) (row*col);
}

double max_array2d(int row, int col, double arr2d[row][col])
{
  int i, j;
  double max = arr2d[0][0];
  
  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++)
      if (max < arr2d[i][j])
        max = arr2d[i][j];
  
  return max;
}



