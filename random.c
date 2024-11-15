#include <stdio.h>

int random(long int num)
{
    if(num<=1) return 1;
    if (num%2==0) return num/2;
    else return num*3+1;
}
int main()
{
    long int num,i;
    printf("number to be seeded> ");
    scanf("%d",&num);
    for(i=0;num!=1;i++)
    {
        num=random(num);
        printf("num > %ld\n",num);
    }
    printf("random is> %d",i);
    return 0;
}
