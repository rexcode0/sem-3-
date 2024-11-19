// Write a program that uses a function to sort an array of integers.
#include <stdio.h>
void print_array(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
}
void sort(int array[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    print_array(array, 10);           
    
}

int main()
{
    int arr[10] = {9, 3, 4, 5, 3, 2, 55, 3, 2, 8};
    sort(arr, 10);
    return 0;
}