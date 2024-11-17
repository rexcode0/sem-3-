#include <stdio.h>
#include
typedef struct
{
    int length;
    int values[];
}data;
// function to sum the values of an array
long int sum(int data[], int len)
{
    long int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum = sum + data[i];
    }
    return sum;
}

//function to find the max value into an array
int max(int data[], int len)
{
    int max = data[0];
    for (int i = 0; i < len;i++)
    {
        if(max<data[i]) max=data[i];
    }
    return max;
}

//function to find the minimum value of the given array
int min(int data[], int len)
{
    int min = data[0];
    for (int i = 0; i < len;i++)
    {
        if(min>data[i]) min=data[i];
    }
    return min;
}


//function to find the mean of the vales of a given array
int mean(int data[],int len)
{
    long int sumx = sum(data,len);
    int mean = sumx/len;
    return mean;
}

//function to mode of the given data
int mode(data)