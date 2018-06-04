#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) 
{  
  return (a > b ? a : b);  
}  
      
int min(int a, int b) 
{  
  return (a < b ? a : b);  
}  
     
int operation(int a, int b, int (*op)())
{
  return (*op)(a, b);
}

int main(void)
{
  int (*f) (int, int);
  
  f = max; 
  printf("The max value is %d \n", operation(1, 2, max));  
      
  f = min; 
  printf("The min value is %d \n", f(1, 2));  
      
  return 0;  
} 
