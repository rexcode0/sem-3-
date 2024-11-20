//Aim :- WAP that uses a table of integers whose size will be specified interactively at runtime.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int len,*table;
    printf("enter the length for the table> ");
    scanf("%d",&len);
    table= (int*) malloc(len*sizeof(table));
    if(table==NULL)
    {
        fprintf(stderr,"unable to allocate memory");
    }
      for(int i =0;i<len;i++)
    {
        scanf("%d",&table[i]);
    }
    printf("you have entered > ");
    for(int i =0;i<len;i++)
    {
        printf("%d ",table[i]);
    }
}