#include <stdio.h>
#define SIZE 5
void copy_arr(double source[], double target[], int n);
void copy_ptr(double * source, double * target, int n);
void print_arr(double arr[], int n);

int main(void)
{
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[5], target2[5];
  
  copy_arr(source, target1, SIZE);
  copy_ptr(source, target2, SIZE);
  print_arr(source, SIZE);
  print_arr(target1, SIZE);
  print_arr(target2, SIZE);
  
  return 0;
}

void copy_arr(double source[], double target[], int n)
{
  int i;
  
  for (i = 0; i < n; i++)
    target[i] = source[i];
  
}

void copy_ptr(double * source, double * target, int n)
{
  double * ptr1 = source;
  double * ptr2 = target;
  
  while (ptr1 < source + n)
    *ptr2++ = *ptr1++;
}

void print_arr(double arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%6.2f ", arr[i]);
  putchar('\n');
  
}