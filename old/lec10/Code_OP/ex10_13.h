#include <stdio.h>

void input_array2d(int row, int col, double arr2d[row][col]);
void print_array1d(double arr1d[], int n);
void print_array2d(int row, int col, double arr2d[row][col]);
double aver_array1d(double * arr1d, int n);
void aver_array2d_row(int row, int col, double arr2d[row][col],
                      double average[]);
double aver_array2d(int row, int col, double arr2d[row][col]);
double max_array2d(int row, int col, double arr2d[row][col]);