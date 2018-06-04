#include<stdio.h>
void add_two_arrays(int n, double * ar1, double * ar2, double * ar3);
void print_array(int n, const double * ar);

int main(void)
{
  double a[5] = {3.2, 1.1, 6.5, 2.3, 4.4};
  double b[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
  double c[5];

  printf("a:\n");
  print_array(5, a);


  printf("b:\n");
  print_array(5, b);

  add_two_arrays(5, a, b, c);
  printf("a+b:\n");
  print_array(5, c);  

  return 0;
}

void add_two_arrays(int n, double * ar1, double * ar2, double * ar3)
{
  int i;
  for(i = 0; i < n; ++i)
    ar3[i] = ar1[i] + ar2[i];
}

void print_array(int n, const double * ar)
{
  int i;
  for(i = 0; i < n; ++i)
    printf("%.3f ", ar[i]);
  putchar('\n');
}
