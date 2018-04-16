#include <stdio.h>
void max_arr1d(double * arr, int n, double * max, int * index);

int main(void)
{
  double array[4] = {2.0,-1.0,5.0,5.0};
  double max;
  int index;
  
  max_arr1d(array, 4, &max, &index);
  printf("the maximum value of array is %f "
         "which is located at %d-th element.\n",
         max, index+1);
  
  return 0;
}

void max_arr1d(double * arr, int n, double * max, int * index)
{
  int i;
  *max = arr[0];
  *index = 0;
  
  for (i = 1; i < n; i++)
  {
    if (*max < arr[i])
    {
      *max = arr[i];
      *index = i;
    }
  }
}