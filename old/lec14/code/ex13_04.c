#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  float buffer[] = {1.0, 2.0, 3.0};
  float read[3];
  FILE * fp;
  
  if ((fp = fopen("file3.txt", "wb")) == NULL) {
    printf("Cannot open files.\n");
    exit(0);
  }
  fwrite(buffer, sizeof(buffer), 1, fp);
  fclose(fp);
  
  if ((fp = fopen("file3.txt", "rb")) == NULL) {
    printf("Cannot open files.\n");
    exit(0);
  }
  fread(read, sizeof(read), 1, fp);
  printf("%f %f %f\n", read[0], read[1], read[2]);
  fclose(fp);
  
  return 0;
}
