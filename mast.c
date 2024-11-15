#include <stdio.h>
#include <stdlib.h>
int is_prime(long int num)
{
    for (long int i = 2; i < num;i++)
    {
        if(num%i==0) return 0;
    }
    return 1;
}
int write()
{
    FILE *fl=fopen("new.txt","w");
    for(long int i =3;i<999;i++)
    {
        if(i%21==0) fprintf(fl,"\n");
        if(is_prime(i)) fprintf(fl,"\e[34m%-5ld \e[0m",i);
        else fprintf(fl,"%-5ld ",i);
    }
    printf("\n");
    fclose(fl);
    return 0;
}

int read()
{
   FILE *fl=fopen("new.txt","r");

   int ch;
  while((ch=fgetc(fl))!=EOF)
  {
    putchar(ch);
  }
  printf("%ld",sizeof(fl));
   return 0;
}
int main()
{
    read();
    return 0;
}