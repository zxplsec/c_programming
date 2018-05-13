// swap3.c -- using pointers to make swapping work
#include <stdio.h>
void swap(int *, int *);

int main(void)
{
  int x = 5, y = 10;  
  printf("Before: x = %2d, y = %2d.\n", x, y);
  swap(&x, &y); 
  printf("After : x = %2d, y = %2d.\n", x, y);  
  return 0;
}

void swap(int * u, int * v)
{
  int temp;  
  temp = *u;
  *u = *v;
  *v = temp;
}
