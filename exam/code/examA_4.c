#include<stdio.h>
#include<stdbool.h>

void swap(int * a, int * b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

void order_array(int * ar, int n)
{
  int i, j;

  for(i = 0; i < n-1; ++i) {
    for(j = i+1; j < n; ++j) {
      if(ar[i] > ar[j])
	swap(&ar[i], &ar[j]);
    }
  }  
}

bool search_array(const int * ar, int n, int x)
{
  int i;
  bool flag = false;

  for(i = 0; i < n; ++i){
    if(ar[i] == x) {
      flag = true;
      break;
    }
  }
  return flag;
}


int delete_array(int * ar, int n, int i)
{
  int j;
  int val = ar[i];

  for(j = i+1; j < n; ++j)
    ar[j-1] = ar[j];

  return val;
}


void show_array(const int * ar, int n, char type)
{
  int i;

  if(type == 'r') {
    for(i = 0; i < n; ++i)
      printf("%3d ", ar[i]);
    printf("\n");
  }else {
    for(i = 0; i < n; ++i)
      printf("%3d\n", ar[i]);
  }
}

int main(void)
{
  int ar[] = {3, 1, 5, 7, 2};
  int x = 4;
  show_array(ar, 5, 'r');
  order_array(ar, 5);
  show_array(ar, 5, 'r');

  if(search_array(ar, 5, x)) 
    printf("%3d is located in ar.\n", x);
  else
    printf("%3d is NOT located in ar.\n", x);
  
  delete_array(ar, 5, 2);
  show_array(ar, 4, 'r');
}
