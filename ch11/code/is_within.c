#include<stdio.h>
#include<stdbool.h>
bool is_within(const char * str, int c);

int main(int argc, char * argv[])
{  
  char * str;
  char ch;

  if(argc != 3) {
    fprintf(stderr, "Usage: %s string character.\n", argv[0]);
    return 1;
  }

  str = argv[1];
  ch = argv[2][0];
  
  if (is_within(str, ch))
    printf("Find the character %c\n", ch);
  else
    printf("Cannot find the character %c!\n", ch);

  return 0;
}
  
bool is_within(const char * str, int c)
{   
  while(*str && *str != c)
    str++;
  if (*str == c)
    return true;
  return false;
}
