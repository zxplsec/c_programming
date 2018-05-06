#include <stdio.h>

void movie();
void teleplay();
void variety();
void entertainment();
void animation();

int main(void)
{
  int choice;

  printf("********************************************\n");
  printf("1. Movie          2. Teleplay     3. Variety\n");
  printf("4. Entertainment  5. Animation    6. Exit\n");
  printf("********************************************\n");
  
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice) {
  case 1: 
    movie();
    break;
  case 2: 
    teleplay();
    break;
  case 3: 
    variety();
    break;
  case 4: 
    entertainment();
    break;
  case 5:
    animation();
  default:
    break;
  }
  
  return 0;
}

void movie()
{
  printf("Loading Movie ...\n");
}

void teleplay()
{
  printf("Loading Teleplay ...\n");
}

void variety()
{
  printf("Loading Variety ...\n");
}

void entertainment()
{
  printf("Loading Entertainment ...\n");
}

void animation()
{
  printf("Loading Animation ...\n");
}


