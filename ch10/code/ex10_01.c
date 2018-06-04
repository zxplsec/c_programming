#include<stdio.h>
void sort(int n, double * ar);
void print_array(int n, double * ar);

int main(void)
{
  double ar[5] = {2.1, 5.3, 3.2, 4.4, 1.2};

  print_array(5, ar);
  sort(5, ar);
  print_array(5, ar);

  return 0;
}

void sort(int n, double * ar)
{
  int i, j;
  double tmp;
  for(i = 0; i < n-1; ++i) {
    for(j = i+1; j < n; ++j) {
      if(ar[i] > ar[j]) {
	tmp = ar[i];
	ar[i] = ar[j];
	ar[j] = tmp;
      }
    }
  }
}

void print_array(int n, double * ar)
{
  int i;
  for(i = 0; i < n; ++i)
    printf("%.3f ", ar[i]);
  putchar('\n');
}
