/*
make a program to print floyed's triangle
*/
#include <stdio.h>

int main()
{
    int n=0;
    int num;
    printf("enter the number > ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%-4d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
