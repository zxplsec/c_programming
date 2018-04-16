#include <stdio.h>
#define ROWS 3
#define COLS 5

void input_array2d(int row, int col, double * arr2d);
void print_array1d(double * arr1d, int n);
void print_array2d(int row, int col, double * arr2d);
void aver_array2d_row(int row, int col, double * arr2d,
                      double * average);
double aver_array2d(int row, int col, double * arr2d);
double max_array2d(int row, int col, double *arr2d);