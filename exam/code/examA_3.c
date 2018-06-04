#include<stdio.h>
void print(int n);

int main(void)
{
  int n;
  
  printf("Plese enter an integer: ");
  scanf("%d", &n);
  print(n);

  return 0;
}

void print(int n)
{
  if(n > 0) {
    printf("%d\n", n);
    print(n-1);
  }
}
