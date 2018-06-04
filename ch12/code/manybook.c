// manybook.c: 
#include<stdio.h>
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBOOK 100
struct book
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(void)
{
  struct book library[MAXBOOK];
  int count = 0;
  int i;

  printf("Enter the book title.\n");
  printf("Press [enter] at the start of a line to stop.\n");
  while (count < MAXBOOK 
	 && gets(library[count].title) != NULL
	 && library[count].title[0] != '\0') {
    printf("Enter the author.\n");
    gets(library[count].author);
    printf("Enter the value.\n");
    scanf("%f", &library[count++].value);
    while(getchar() != '\n')
      continue;
    if (count < MAXBOOK)
      printf("Enter the next title.\n");
  }
  
  if (count > 0) {
    printf("Here is the list of your book:\n");
    for (i = 0; i < count; i++)
      printf("%s by %s: %.2f\n", library[i].title,
	     library[i].author, library[i].value);
  } else {
    printf("No book? Too bad!\n");
  }
    
  return 0;
}
