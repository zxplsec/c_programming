#include "ex10_12.h"

int main(void)
{
  double arr2d[ROWS][COLS];
  double average_row[ROWS];
  double average;
  double max;
  
  printf("Please input 3 sets of five double numbers each.\n");
  input_array2d(arr2d, ROWS);
  
  printf("The array is:\n");
  print_array2d(arr2d, ROWS);
  
  aver_array2d_row(arr2d, ROWS, average_row);
  printf("average of each row:\n");
  print_array1d(average_row, ROWS);
  
  average = aver_array2d(arr2d, ROWS);
  printf("average of arr2d is %5.2f\n", average);
 
  max = max_array2d(arr2d, ROWS);
  printf("max of arr2d is %5.2f\n", max);
  
  return 0;
}

void input_array2d(double arr2d[][COLS], int row)
{
  int r, c;
  for (r = 0; r < row; r++)
    for (c = 0; c < COLS; c++)
      scanf("%lf", &arr2d[r][c]);
}

void print_array1d(double arr1d[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%8.2f", arr1d[i]);
  putchar('\n');
}

void print_array2d(double arr2d[][COLS], int row)
{
  int r;
  for (r = 0; r < row; r++)
    print_array1d(arr2d[r], COLS);
}

double aver_array1d(double * arr1d, int n)
{
  int i;
  double total = 0.0;
  
  for (i = 0; i < n; i++)
    total += arr1d[i];
  
  return total/(double) n;
}

void aver_array2d_row(double arr2d[][COLS], int row,
                      double average[])
{
  int i;
  
  for (i = 0; i < row; i++)
    average[i] = aver_array1d(arr2d[i], COLS);
}

double aver_array2d(double arr2d[][COLS], int row)
{
  int i, j;
  double total = 0.0;
  
  for (i = 0; i < row; i++)
    for (j = 0; j < COLS; j++)
      total += arr2d[i][j];

  return total/(double) (row*COLS);
}

double max_array2d(double arr2d[][COLS], int row)
{
  int i, j;
  double max = arr2d[0][0];
  
  for (i = 0; i < row; i++)
    for (j = 0; j < COLS; j++)
      if (max < arr2d[i][j])
        max = arr2d[i][j];
  
  return max;
}



