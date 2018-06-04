#include <stdio.h>
#include <stdlib.h>

char * my_strncpy (char * target, const char * source, int n);

int main(int argc, char * argv[])
{
  char * target, * source;
  int n;

  if(argc != 4) {
    fprintf(stderr, "Usage: %s target source n", argv[0]);
    return 1;
  }

  target = argv[1];
  source = argv[2];
  n = atoi(argv[3]);

  my_strncpy(target, source, n);

  printf("%s\n", target);

  return 0;
}

char * my_strncpy (char * target, const char * source, int n)
{  
  char *start = target;

  while (n && (*target++ = *source++))   
    n--;

  if (n)                             
    while (--n)
      *target++ ='\0';

  return (start);
}
