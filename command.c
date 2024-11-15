#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("number of argumenr %d",argc);
    for(int i=0;i<argc;i++) printf("%s ",argv[i]);
    return 0;
}
