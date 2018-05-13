// swap2.c:
#include <stdio.h>
void swap(int u, int v);

int main(void)
{
  int x = 5, y = 10;  
  printf("Before: x = %2d, y = %2d.\n", x, y);
  swap(x, y);
  printf("After : x = %2d, y = %2d.\n", x, y);  
  return 0;
}

void swap(int u, int v)
{
  int temp;  
  printf("Before: u = %2d, v = %2d.\n", u, v);
  temp = u;
  u = v;
  v = temp;
  printf("After : u = %2d, v = %2d.\n", u, v);
}
