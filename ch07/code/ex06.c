#include <stdio.h>
int main(void)
{
  int score;

  printf("Please enter your score: ");
  while( scanf("%d", &score) == 1) {
    switch (score / 10) {
    case 10: 
    case  9:
      printf("Grade: A\n");
      break;
    case  8:
      printf("Grade: B\n");
      break;      
    case  7:
      printf("Grade: C\n");
      break;
    case  6:
      printf("Grade: D\n");
      break;      
    default:
      printf("Grade: E\n");
      break;
    }
  }
  
  return 0;
}
