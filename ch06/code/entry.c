// entry.c: 
#include <stdio.h>
int main(void)
{
  const int SECRET_CODE = 13;
  int code_entered;
  printf("To withdraw money from ATM. \n");
  printf("Enter the secret code number: ");
  scanf("%d", &code_entered);
  while (code_entered != SECRET_CODE) {
    printf("To withdraw money from ATM. \n");
    printf("Enter the secret code number: ");
    scanf("%d", &code_entered);
  }
  printf("Congratulations! You are permitted!\n");
  return 0;
}
