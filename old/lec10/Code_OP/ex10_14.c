#include "ex10_14.h"

int main(void)
{
  
  double arr2d[ROWS*COLS];
  double average_row[ROWS];
  double average;
  double max;
  
  printf("Please input 3 sets of five double numbers each.\n");
  input_array2d(ROWS, COLS, arr2d);
  printf("The array is:\n");
  print_array2d(ROWS, COLS, arr2d);
  
  aver_array2d_row(ROWS, COLS, arr2d, average_row);
  printf("average of each row:\n");
  print_array1d(average_row, ROWS);
  
  average = aver_array2d(ROWS, COLS, arr2d);
  printf("average of arr2d is %5.2f\n", average);
 
  max = max_array2d(ROWS, COLS, arr2d);
  printf("max of arr2d is %5.2f\n", max);
  
  return 0;
}

void input_array2d(int row, int col, double * arr2d)
{
  int i;
  for (i = 0; i < row*col; i++)
      scanf("%lf", &arr2d[i]);
}

void print_array1d(double * arr1d, int n)
{
  int i;
  
  for (i = 0; i < n; i++)
    printf("%8.3f", arr1d[i]);
  putchar('\n');
  
}

void print_array2d(int row, int col, double * arr2d)
{
  int r, c;

  for (r = 0; r < row; r++)
  {
    for (c = 0; c < col; c++)
      printf("%8.2f",arr2d[r*col+c]);
    putchar('\n');
  }
}

void aver_array2d_row(int row, int col, double * arr2d,
                      double * average)
{
  int r, c;
  double sum;
  
  for (r = 0; r < row; r++)
  {
    sum = 0.0;
    for (c = 0; c < col; c++)
      sum += arr2d[r*col+c];
    average[r] = sum / (double) col;
  }
    
}

double aver_array2d(int row, int col, double * arr2d)
{
  int i;
  double total = 0.0;
  
  for (i = 1; i < row*col; i++)
      total += arr2d[i];

  return total/(double) (row*col);
}

double max_array2d(int row, int col, double *arr2d)
{
  int i;
  double max = arr2d[0];
  
  for (i = 1; i < row*col; i++)
    if (max < arr2d[i])
      max = arr2d[i];

  return max;
}



