// dec2base.c
#include <stdio.h>
char *BaseString = "0123456789ABCDEF";
void dec2base(unsigned long dec, int base);

int main(void)
{
  unsigned long  number;
  int n;

  printf("Enter the base you want to choose: ");
  scanf("%d", &n);
  printf("Enter an integer (q to quit):\n");
  while (scanf("%lu", &number) == 1) {
    printf("Result: ");
    dec2base(number, n);
    putchar('\n');
    printf("Enter an integer (q to quit):\n");
  }
  printf("Done.\n");
  return 0;
}

void dec2base(unsigned long dec, int base)
{
  int r;
  r = dec % base;
  if (dec  >= base)
    dec2base(dec / base, base);
  putchar(BaseString[r]);
  return;
}
