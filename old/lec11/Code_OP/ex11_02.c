#include<stdio.h>
#include<stdbool.h>
bool is_within(const char * str, int c);

int main(void) {
  char * str = "0123456789012345678901234567890";
  char c = '5';

  
  if (is_within(str, c))
    printf("Find the character %c\n", c);
  else
    printf("Cannot find the character %c!\n", c);

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
