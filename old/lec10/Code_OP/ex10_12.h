#include <stdio.h>

#define COLS 5
#define ROWS 3
void input_array2d(double arr2d[][COLS], int row);
void print_array1d(double arr1d[], int n);
void print_array2d(double arr2d[][COLS], int row);
double aver_array1d(double * arr1d, int n);
void aver_array2d_row(double arr2d[][COLS], int row, double average[]);
double aver_array2d(double arr2d[][COLS], int row);
double max_array2d(double arr2d[][COLS], int row);
