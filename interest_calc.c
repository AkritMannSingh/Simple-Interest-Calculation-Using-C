#include <stdio.h>
int main(){
printf("Welcome in Interest Calculator🧮");

printf("---------------------------------------");
  int p;
  int r;
  int t;
  printf("Enter the principal amount:");
  scanf("%d", & p);
  printf("Enter the rate of interest:");
  scanf("%d", & r);
  printf("Enter the time period:");
  scanf("%d", & t);
  printf("The simple interest is %f\n", (p*r*t)/100.0);

printf("========================================");
printf("It's 👍");
  return 0;
}