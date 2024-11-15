#include <stdio.h>

int main()
{
    int number,sum=0,counter=0,l_digit,reverse=0;
    printf("enter the number > ");
    scanf("%d",&number);
    for(int i=0;number>0;i++)
    {
        counter++;
        l_digit=number%10;
        sum=sum+l_digit;
        reverse=reverse*10+l_digit; 
        number=number/10;      
    }
    printf("reverse is %d \nsum of digits is %d \nnumber of digits is %d\n",reverse,sum,counter);
    return 0;
}