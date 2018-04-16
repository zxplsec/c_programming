#include<stdio.h>
char * my_strchr(const char * str, int c);

int main(void) {
  char * str = "0123456789012345678901234567890";
  char * p;
  char c = '5';

  p = my_strchr(str, c);
  if (p == NULL)
    printf("Cannot find the character %c!\n", c);
  else
    printf("Find the character %c\n", *p);

  return 0;
}
  
char * my_strchr(const char * str, int c)
{
  
  while(*str && *str != c)
    str++;
  if (*str == c)
    return ((char *) str);
  return NULL;
}
