// lethead2.c 
#include <stdio.h>
#include <string.h>
#define NAME "Wuhan University"
#define ADDRESS "299 Bayi Road, Wuchang District,"
#define PLACE "Wuhan, PR China 430072" 
#define WIDTH 40
#define SPACE ' '
void show_n_char(char ch, int num);

int main(void)
{
  int spaces;
  
  show_n_char('*', WIDTH);
  putchar('\n');

  spaces = (WIDTH - strlen(NAME))/2;
  show_n_char(SPACE, 12);  
  printf("%s\n", NAME);  

  spaces = (WIDTH - strlen(ADDRESS))/2;
  show_n_char(SPACE, spaces);
  printf("%s\n", ADDRESS);

  spaces = (WIDTH - strlen(PLACE))/2;
  show_n_char(SPACE, spaces); 
  printf("%s\n", PLACE);  

  show_n_char('*', WIDTH);
  putchar('\n');  

  return 0;
}

void show_n_char(char ch, int num)
{
  int i;
  for (i = 1; i <= num; ++i)
    putchar(ch);
}
