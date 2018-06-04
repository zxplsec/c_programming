#include<stdio.h>
#include<stdlib.h>

double power(double a, int n)
{
  if(0 == n)
    return 1.0;
  if(n % 2) // odd
    return power(a, n/2)*power(a, n/2)*a;
  else
    return power(a, n/2)*power(a, n/2);
}

int main(int argc, char * argv[])
{
  int n;
  double a;
  
  if (argc != 3) {
    printf("usage: %s base exponetial\n", argv[0]);
    return 1;
  }

  a = atof(argv[1]);
  n = atoi(argv[2]);
  printf("%.2f ^ %2d = %.2f\n", a, n, power(a, n));

  return 0;
}
