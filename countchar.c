// Write a program to count the numbers and chars in the string.
#include <stdio.h>
// for 0-9 =48-57
// for A-Z=65-90
// for a-z=97-122

int main()
{
    char string[200];
    printf("enter the string you want to count from\n[=]> ");
    scanf("%[^\n]",string);
    int let_count=0,dig_count=0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 48 && string[i] <= 57)
        {
            dig_count++;
        }
        else if (string[i] >= 65 && string[i] <= 90 || string[i] >= 97 && string[i] <= 122)
        {
            let_count++;
            

        }
    }
    printf("there are %d letters and %d digits",let_count,dig_count);
    return 0;
}
