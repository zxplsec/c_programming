// funds1.c: 
#include<stdio.h>
#define LEN 50
struct funds {
  char bank[LEN];
  double bankfund;
  char save[LEN];
  double savefund;
};

double sum(double, double);

int main(void) 
{
  struct funds stan = {
    "Hankou Bank",
    3024.32,
    "Lucky's Savings and Loan",
    9237.11
  };
  
  printf("Stan has a total of %.2f.\n",
	 sum(stan.bankfund, stan.savefund));
}

double sum(double x, double y)
{
  return (x + y);
}


