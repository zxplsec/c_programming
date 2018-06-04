// funds3.c
#include<stdio.h>
#define LEN 50
struct funds {
  char bank[LEN];
  double bankfund;
  char save[LEN];
  double savefund;
};

double sum(const struct funds moolah);

int main(void) 
{
  struct funds stan = {
    "Hankou Bank",
    3024.32,
    "Lucky's Savings and Loan",
    9237.11
  };
  
  printf("Stan has a total of %.2f.\n",
	 sum(stan));
}

double sum(const struct funds moolah)
{
  return (moolah.bankfund + moolah.savefund);
}


