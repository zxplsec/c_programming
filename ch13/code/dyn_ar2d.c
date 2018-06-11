// dyn_ar2d.c: 
#include <stdio.h>
#include <stdlib.h>
int ** allocate_ar2d(int r, int c);
void free_ar2d(int r, int ** ar);

int main(void)
{
  int i, j;
  int r = 4, c = 5;
  int ** ar;
  
  ar = allocate_ar2d(r,c);
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++){
      ar[i][j] = i+j;
      printf("%4d ", ar[i][j]);
    }
    putchar('\n');
  }  
  free(ar);
}

int ** allocate_ar2d(int r, int c)
{
  int i;
  int ** ar = (int **) malloc(r * sizeof(int *));
  
  for(i = 0; i < r; i++)
    ar[i] = (int *) malloc(c * sizeof(int));

  return ar;
}


void free_ar2d(int r, int ** ar)
{
  int i;
  
  for(i = 0; i < r; i++)
    free(ar[i]);
  free(ar);
}
