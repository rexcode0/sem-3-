#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr,*des, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    des = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
     {
        scanf("%d", arr + i);
    }

    for(int i=0;i<num;i++)
    {
        des[i]=arr[num-i-1];
    }
    arr=des;
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
        
    return 0;
}