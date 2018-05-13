// lethead1.c
#include <stdio.h>

#define NAME "Wuhan University"
#define ADDRESS "299 Bayi Road, Wuchang District,"
#define PLACE "Wuhan, PR China 430072"
#define WIDTH 40

void starbar(void); 

int main(void)
{
  starbar();
  printf("%s\n", NAME);
  printf("%s\n", ADDRESS);
  printf("%s\n", PLACE);
  starbar();

  return 0;
}

void starbar(void)
{
  int i;  
  for (i = 1; i <= WIDTH; i++)
    putchar('*');
  putchar('\n');
}
