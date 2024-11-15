#include <stdio.h>

int length(char* str)
{
    int length=0;
    while(*str!='\0')
    {
        length++;
        str++;
    }
return length;
}
int main()
{
    char string[100];
    printf("enter the string you wanted to get the length of\n > ");
    scanf("%[^\n]",string);
    printf("length of the given string is %d\n ",length(string));
    return 0;
}