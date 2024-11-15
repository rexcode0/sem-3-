#include <stdio.h>

void main()
{
    int num=7866;
    int sum=0,count=0,r=0,a;
    while(num>0)
    {
        a=num%10;
        count++;
        sum+=a;
        r=r*10+a;
        num=num/10;
    }
    printf("number of digits =%d\n",count);
    printf("sum of all digits is %d \n",sum);
    printf("reverse of the number is %d",r);
}