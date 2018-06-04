#include<stdio.h>
char * my_strstr(const char * str1, const char * str2);

int main(int argc, char * argv[])
{  
  char * str1, * str2;
  char * p;

  if(argc != 3) {
    fprintf(stderr, "Usage: %s string character.\n", argv[0]);
    return 1;
  }

  str1 = argv[1];
  str2 = argv[2];

  p = my_strstr(str1, str2);
  if (p)
    printf("%s\n", p);
  else
    printf("%s is not contained in %s\n", str2, str1);

  return 0;
}

  
char * my_strstr(const char * str1, const char * str2)
{
  char * start = (char *) str1;
  char *s1, *s2;
 
  if (!*str2) // if str2 is empty
    return((char *) str1);
 
  while (*start) {
    s1 = start;
    s2 = (char *) str2;
    
    while (*s1 && *s2 && !(*s1 - *s2))
      s1++, s2++;
    
    if (!*s2)
      return start;
    
    start++;
  }
  return NULL;
}
