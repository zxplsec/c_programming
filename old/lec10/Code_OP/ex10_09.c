#include <stdio.h>
void sum_arr1d(int * arr1, int * arr2, int * arr3, int n);
void print_arr1d(int arr1d[], int n);

int main(void)
{
  int arr1[4] = {2,4,5,8};
  int arr2[4] = {1,0,4,6};
  int arr3[4];
  
  sum_arr1d(arr1, arr2, arr3, 4);
  print_arr1d(arr1, 4);
  print_arr1d(arr2, 4);
  print_arr1d(arr3, 4);
  
  return 0;
}

void sum_arr1d(int * arr1, int * arr2, int * arr3, int n)
{
  int i;
  for (i = 0; i < n; i++)
    arr3[i] = arr1[i] + arr2[i];
  
}

void print_arr1d(int arr1d[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%3d ", arr1d[i]);
  putchar('\n');
}
