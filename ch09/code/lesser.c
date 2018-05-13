// lesser.c -- finds the lesser of two integers
#include <stdio.h>
int imin(int, int);
int main(void)
{
  int a, b;
  printf("Enter two integers (q to quit):\n");
  while (scanf("%d %d", &a, &b) == 2) {
    printf("The lesser of %d and %d is %d.\n", a, b, imin(a, b));
    printf("Enter two integers (q to quit):\n");
  }
  printf("Bye.\n");
  return 0;
}

int imin(int n,int m)
{
  return (n < m) ? n : m;
}
