// check if the given year is leap 
#include <stdio.h>

int main()
{
    int year;
    printf("enter the year you wanted to check> ");
    scanf("%d",&year);
    if(year%4==0 || year%100==0 && year%400==0) printf("year is leap year");
    else printf("given year is not a leap year");
    return 0;
}