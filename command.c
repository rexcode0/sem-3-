#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("number of argumenr %d",argc);
    for(int i=argc;i>0;i--) printf("%s ",argv[i]);
    return 0;
}
