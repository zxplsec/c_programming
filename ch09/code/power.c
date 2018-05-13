#include<stdio.h>

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
  if (argc != 3) {
    printf("usage: %s base exponetial\n", argv[0]);
  }
  else {
    double a;
    sscanf(argv[1], "%lf", &a);
    int n;
    sscanf(argv[2], "%d", &n);
    printf("%.2f ^ %2d = %.2f\n", a, n, power(a, n));
  }
  return 0;
}
