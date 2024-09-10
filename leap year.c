#include <stdio.h>
int main(){
  int year;
  printf("Enter a number");
  scanf("%d" , &year);
  if(year%4==0)
    printf("\n%d is a leap year. \n" , year);
  else if (year%100==0)
    printf("\n%d is not. \n" , year);
  else if (year%4==0)
    printf("\n%d is a leap year. \n" , year);
  else 
    printf(" \n%d is not \n" ,year);
  return 0;

}
