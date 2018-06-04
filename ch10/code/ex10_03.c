#include <stdio.h>
double find_max_index(int n, const double * ar, int * index);

int main(void)
{
  double ar[5] = {3.2, 1.1, 6.5, 2.3, 4.4};
  int index;
  double max = find_max_index(5, ar, &index);

  printf("max = %.3f, index = %3d\n", max, index);

  return 0;
}

double find_max_index(int n, const double * ar, int * index)
{
  int i;
  double max = -1.e+10;
  for(i = 0; i < n; ++i) {
    if(ar[i] > max) {
      max = ar[i];
      *index = i;
    }
  }
  return max;
}
