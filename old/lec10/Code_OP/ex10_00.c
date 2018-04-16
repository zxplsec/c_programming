#include <stdio.h>
void swap(double * a, double * b);
void sort(double arr[], int n);
void print_arr(double arr[], int n);

int main(void)
{
  double arr[7] = {1.1, 2.2, 7.7, 4.4, 5.5, 3.3, 6.6};
  
  print_arr(arr, 7);
  sort(arr, 7);
  print_arr(arr, 7);
  
  return 0;
}

void swap(double * a, double * b)
{
  double temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
  
}

void sort(double arr[], int n)
{
  int i, j, pos;
  
  for(i = 0; i < n;i++)
  {
    pos = i;
    for(j = i+1; j < n; j++)
    {
      if(arr[j] < arr[pos])
        pos = j;
    }
    if (pos != i)
      swap(&arr[i], &arr[pos]);
  }
}


void print_arr(double arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%6.2f ", arr[i]);
  putchar('\n');
  
}