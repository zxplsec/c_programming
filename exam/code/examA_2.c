#include<stdio.h>
#include<ctype.h>
int main(void)
{
  char ch;
  int na, nb, nc, nd;
  na = nb = nc = nd = 0;
  while((ch = getchar()) != EOF) {
    switch(toupper(ch)) {
    case 'A': na++; break;
    case 'B': nb++; break;
    case 'C': nc++; break;
    case 'D': nd++; break;
    default: break;
    }
  }
  printf("na = %3d, nb = %3d, nc = %3d, nd = %3d\n", na, nb, nc, nd);
  return 0;
}
