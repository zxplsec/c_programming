#include<stdio.h>
int main(void)
{
  char ch;
  while((ch = getchar()) != '#') {
    if (ch == '\n')
      continue;
    putchar(ch);
  }

  return 0;
}
