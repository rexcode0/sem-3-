#include <stdio.h>
#include <string.h>
void sort(char * strings[],int n)
{
    char buffer[30];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(strings[i],strings[j])>0)
            {
                strcpy(buffer,strings[i]);
                strcpy(strings[i],strings[j]);
                strcpy(strings[j],buffer);
            }
        }
    }
}
int main()
{
    char strings[5][100];
   for(int i = 0;i<5;i++)
   {
    scanf("%s",strings[i]);
   }
   sort(strings,5);
   for(int i=0;i<5;i++)
   {
    printf("%s \n",strings[i]);
   }
   
   return 0;
}