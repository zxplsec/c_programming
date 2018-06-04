// dec2base.c
#include <stdio.h>
#include <stdlib.h>

char *BaseString = "0123456789ABCDEF";

void dec2base(unsigned long dec, int base);

int main(int argc, char * argv[])
{
  unsigned long dec;
  int base;

  if(argc != 3) {
    fprintf(stderr, "Usage: %s dec base\n", argv[0]);
    return 1;
  }
  
  dec = strtoul(argv[1], NULL, 0);
  base = atoi(argv[2]);
  printf("(10) %lu = (%d) ", dec, base);
  dec2base(dec, base);
  putchar('\n');
  
  return 0;
}

void dec2base(unsigned long dec, int base)
{
  int r;
  r = dec % base;
  if (dec  >= base)
    dec2base(dec / base, base);
  putchar(BaseString[r]);
  return;
}
