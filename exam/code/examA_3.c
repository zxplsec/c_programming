#include<stdio.h>
void print(int n);

int main(void)
{
  int n;
  
  printf("Plese enter an integer: ");
  scanf("%d", &n);
  print(n);
  putchar('\n');

  return 0;
}

void print(int n)
{
  if(n > 1) 
    print(n-1);
  printf("%d ", n);
  
}
