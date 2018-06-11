#include<stdio.h>
#include<ctype.h>
int main(void)
{
  char ch;
  int na, nb, nc, nd;
  na = nb = nc = nd = 0;
  int ret = 1;
  
  while(ret) {
    switch(getchar()) {
    case 'a':
    case 'A': na++; break;
    case 'b':
    case 'B': nb++; break;
    case 'c':
    case 'C': nc++; break;
    case 'd':
    case 'D': nd++; break;
    case EOF: ret = 0; break;
    default: break;
    }
  }
  printf("na = %3d, nb = %3d, nc = %3d, nd = %3d\n", na, nb, nc, nd);
  return 0;
}
