#include <stdio.h>
void fibo(int max_range)
{
    int a=1,b=1,c=0;
    printf("0 1 1 ");
    for(int i =0;i<max_range;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
void main()
{
    int max=5;
    fibo(max);
}