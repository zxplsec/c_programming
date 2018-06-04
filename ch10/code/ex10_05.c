#include<stdio.h>
double dot_prod(double * ar1, double * ar2);
void cross_prod(double * a, double * b, double * c);
void print_array(int n, const double * ar);

int main(void)
{
  double a[3] = {1.0, 2.0, 3.0};
  double b[3] = {1.0, 1.0, 1.0};
  double c[3];

  printf("a:\n");
  print_array(3, a);

  printf("b:\n");
  print_array(3, b);

  printf("dot product:\n");
  printf("%.3f\n", dot_prod(a, b));

  cross_prod(a, b, c);
  printf("cross product:\n");
  print_array(3, c);  

  return 0;
}

double dot_prod(double * ar1, double * ar2)
{
  int i;
  double result = 0.0;
  
  for(i = 0; i < 3; ++i)
    result += ar1[i] * ar2[i];

  return result;
}

void cross_prod(double * a, double * b, double * c)
{
  c[0] = a[1]*b[2] - a[2]*b[1];
  c[1] = a[2]*b[0] - a[0]*b[2];
  c[2] = a[0]*b[1] - a[1]*b[0];
}

void print_array(int n, const double * ar)
{
  int i;
  for(i = 0; i < n; ++i)
    printf("%.3f ", ar[i]);
  putchar('\n');
}
