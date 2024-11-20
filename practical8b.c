//Write a program to read 10 values to an array variable. Use pointers to locate and display each value.
#include <stdio.h>

int main()
{
int arr[10];
for(int i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<10;i++)
{
    printf("%d ",*(arr+i));
}
return 0;
}