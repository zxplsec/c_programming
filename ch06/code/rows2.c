// row2.c: 
#include <stdio.h>
#define ROWS 6
#define CHARS 6
int main(void)
{
  int row;
  char ch;  

  for (row = 0; row < ROWS; row++) {
    for (ch = 'A' + row; ch < ('A' + CHARS); ch++)
      printf("%c ", ch);
    printf("\n");
  }  

  return 0;
}
