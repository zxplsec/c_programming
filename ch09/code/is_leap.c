// is_leap.c
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool is_leap(int year);

int main(int argc, char * argv[])
{
  int year;
  if(argc != 2) {
    fprintf(stderr, "Usage: %s year\n", argv[0]);
    return 1;
  }

  year = atoi(argv[1]);
  if(is_leap(year))
    printf("%d is a leap year.\n", year);
  else 
    printf("%d is NOT a leap year.\n", year);
  
  return 0;
}

bool is_leap(int year)
{
  if(!year%4 && year%100 || !year%400)
    return true;
  return false;
}


