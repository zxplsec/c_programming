// min.c 
#include <stdio.h>
#include <stdlib.h>

double min(double x, double y);

int main(int argc, char * argv[])
{
  double x, y;
  if(argc != 3) {
    fprintf(stderr, "Usage: %s x y\n", argv[0]);
    return 1;
  }
  x = atof(argv[1]);
  y = atof(argv[2]);
  printf("min(%8.3f, %8.3f) = %8.3f\n", x, y, min(x, y));

  return 0;
}

double min(double x, double y)
{
  return (x > y) ? x : y;
}
