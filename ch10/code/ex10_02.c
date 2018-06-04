#include <stdio.h>
void print_arr(int n, const double ar[]);
void copy_arr(int n, const double source[], double target[]);
void copy_ptr(int n, const double * source, double * target);

int main(void)
{
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[5], target2[5], target3[3];
  
  printf("source:\n");
  print_arr(5, source);

  copy_arr(5, source, target1);
  printf("target1:\n");
  print_arr(5, target1);

  copy_ptr(5, source, target2);
  printf("target2:\n");
  print_arr(5, target2);

  copy_ptr(3, source+2, target3);
  printf("target3:\n");
  print_arr(3, target3);
  
  return  0;
}

void copy_arr(int n, const double source[], double target[])
{
  int i;
  for(i = 0; i < n; ++i)
    target[i] = source[i];
}

void copy_ptr(int n, const double * source, double * target)
{
  int i;
  for(i = 0; i < n; ++i)
    *(target++) = *(source++);
}

void print_arr(int n, const double * ar)
{
  int i;
  for(i = 0; i < n; ++i)
    printf("%.3f ", ar[i]);
  putchar('\n');
}
