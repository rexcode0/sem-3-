#include <stdio.h>
//print fibonaci numbers upto n terms
int main()
{
int a=1,b=1,c=1,n,sum=2;
printf("enter the value for n> ");
scanf("%d",&n);
printf("0 1 1 ");
for(int i=0;i<n;i++)
{
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    sum=c+sum;
}
printf("\n sum is %d \n",sum);
return 0;
}