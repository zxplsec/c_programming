#include<stdio.h>
char * my_strchr(const char * str, char c);

int main(int argc, char * argv[])
{
  char * p;

  if(argc != 3) {
    fprintf(stderr, "Usage: %s string character\n", argv[0]);
    return 1;
  }

  p = my_strchr(argv[1], argv[2][0]);
  if (p == NULL)
    printf("Cannot find the character %c!\n", argv[2][0]);
  else
    printf("Find the character %c!\n", *p);

  return 0;
}
  
char * my_strchr(const char * str, char c)
{
  
  while(*str && *str != c)
    str++;
  if (*str == c)
    return ((char *) str);
  return NULL;
}
