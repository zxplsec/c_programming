// randbin.c
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

int main(void)
{
  double arr[SIZE];
  double value;
  const char * file = "number.dat";
  int i;
  long pos;
  FILE * fp;

  // Creat an array with double elements
  for (i = 0; i < SIZE; i++)
    arr[i] = 100.0 * i + 1.0 / (i + 1);

  // Attempt to open file
  if ((fp = fopen(file, "wb")) == NULL) {
    fprintf(stderr, "Could not open %s for output", file);
    exit(1);
  }
  
  // Write the data in the array into file with binary mode
  fwrite(arr, sizeof(double), SIZE, fp);
  
  // Close the file
  fclose(fp);
  
  // Attempt to open file
  if ((fp = fopen(file, "rb")) == NULL) {
    fprintf(stderr, "Could not open %s for random acess", file);
    exit(1);
  }
  
  // Read selected item in the file
  printf("Enter an index in the range 0-%d\n", SIZE-1);
  scanf("%d", &i);

  while(i >= 0 && i < SIZE) {
    pos = (long) i * sizeof(double); // compute offset
    fseek(fp, pos, SEEK_SET);      
    fread(&value, sizeof(double), 1, fp);
    printf("The value there is %f.\n", value);
    printf("Next index (out of range to quit):\n");
    scanf("%d", &i);
  }
  fclose(fp);
  puts("Bye!");
  
  return 0;
}
