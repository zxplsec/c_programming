#include <stdio.h>
void copy_arr(double source[], double target[], int n);
void print_arr(double arr[], int n);

int main(void)
{
  double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
  double target[3];
  
  copy_arr(source+2, target, 3);
  print_arr(source, 7);
  print_arr(target, 3);
  
  return 0;
}

void copy_arr(double source[], double target[], int n)
{
  int i;
  
  for (i = 0; i < n; i++)
    target[i] = source[i];
  
}


void print_arr(double arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%6.2f ", arr[i]);
  putchar('\n');
  
}