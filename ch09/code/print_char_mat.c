// print_char_mat.c
#include <stdio.h>
#include <stdlib.h>

void print_char_mat(int row, int col, char c);

int main(int argc, char * argv[])
{
  int row, col;
  char c;

  if(argc != 4) {
    fprintf(stderr, "Usage: %s row col char", argv[0]);
    return 1;
  }

  row = atoi(argv[1]);
  col = atoi(argv[2]);
  c = argv[3][0];

  print_char_mat(row, col, c);

  return 0;
}

void print_char_mat(int row, int col, char c)
{
  int i, j;
  for(i = 0; i < row; ++i) {
    for(j = 0; j < col; ++j)
      putchar(c);
    putchar('\n');
  }
}
