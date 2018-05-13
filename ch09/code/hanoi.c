#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int arr[15];
  int nr;
} Stick;

Stick data[3];

void hanoi_init(int n)
{
  int i;
  for(i = 0; i < n; i++)
    data[0].arr[i] = n - i;
  data[0].nr = n;
  data[1].nr = 0;
  data[2].nr = 0;
}

void hanoi_display(void)
{
  int i, j, k;
  for(i = 0 ;i < 3; i++) {
    for(j = 0; j < data[i].nr; j++)
      printf("%2.d", data[i].arr[j]);

    for(k = data[i].nr; k >= data[i].nr && k < 15; k++)
      printf(" -");
    printf("\n");
  }
}

void move(int src, int dest)
{
  int tmp;
  tmp = data[src].arr[--data[src].nr];
  data[dest].arr[data[dest].nr++] = tmp;
  getchar();
  hanoi_display();
}


void hanoi(int src, int dest, int tmp, int n)
{
  if(n == 1) {
    move(src, dest);
    return;
  }  
  hanoi(src, tmp, dest, n-1);
  move(src, dest);
  hanoi(tmp, dest, src, n-1);
}

int main(int argc, char **argv)
{
  if(argc != 2) {
    printf("usage: %s <1-15>\n", *argv);
    return 0;
  }
  else {
    int m = atoi(argv[1]);
    if(m < 1 || m > 15) {
      printf("pls input a num < 0 - 15 > not %d\n", m);
      return 0;
    }    
    hanoi_init(m);
    hanoi_display();
    hanoi(0, 2, 1, m);
  }
  return 0;
}
