// find_triangle_area.c
#include <stdio.h>
#include <stdlib.h>

double find_triangle_area(double x1, double y1,
			  double x2, double y2,
			  double x3, double y3);

int main(int argc, char * argv[])
{
  double x1, x2, x3, y1, y2, y3;

  if(argc != 7) {
    fprintf(stderr, "%s: x1 y1 x2 y2 x3 y3\n", argv[0]);
    return 1;
  }
  x1 = atoi(argv[1]);
  y1 = atoi(argv[2]);
  x2 = atoi(argv[3]);
  y2 = atoi(argv[4]);
  x3 = atoi(argv[5]);
  y3 = atoi(argv[6]);
  printf("Area = %8.3f\n" , find_triangle_area(x1,y1,x2,y2,x3,y3));

  return 0;
}

double find_triangle_area(double x1, double y1,
			  double x2, double y2,
			  double x3, double y3)
{
  return 0.5*((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
}
