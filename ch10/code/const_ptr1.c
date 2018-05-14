#include<stdio.h>
int main(void)
{
  double rates[4] = {8.,9.,10.,11.};
  const double locked[4] = {0.1,0.2,0.3,0.4};
  const double * pc = rates;
  double * pnc = rates;
  printf("pc  = %p\n", pc);
  printf("pnc = %p, *pnc = %f\n", pnc, *pnc);
    
  pc = locked;
  pnc = locked;
  *(pnc+1) = 0.9;
  printf("pc  = %p\n", pc);
  printf("pnc = %p, locked[1] = %f\n", pnc, locked[1]);
  
  pc = &rates[3];
  pnc = &rates[3];
  printf("pc  = %p\n", pc);
  printf("pnc = %p, *pnc = %f\n", pnc, *pnc);
  
  return 0;
}
