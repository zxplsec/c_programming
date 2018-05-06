#include <stdio.h>
int main(void)
{
  float first, second;
  char operator;

  printf("Entr an operator (+, -, *, /): ");
  scanf("%c", &operator);

  printf("Enter two operands: ");
  scanf("%f %f", &first, &second);
  switch (operator) {
  case '+': 
    printf("%.1f + %.1f = %.1f\n", first, second, first+second);
    break;
  case '-': 
    printf("%.1f - %.1f = %.1f\n", first, second, first-second);
    break;
  case '*': 
    printf("%.1f * %.1f = %.1f\n", first, second, first*second);
    break;
  case '/': 
    printf("%.1f / %.1f = %.1f\n", first, second, first/second);
    break;
      
default:
    break;
  }
  
  return 0;
}
