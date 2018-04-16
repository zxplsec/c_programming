// screen2file.c: 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char ch;
  FILE *fp;
  
  if ( (fp = fopen("file1.txt", "w")) == NULL) {
    printf("Cannot open file1.txt!\n");
    exit(1);
  }
  while ((ch = getchar()) != '#')
    fputc(ch, fp);
  fclose(fp);
  
  return 0;
}
