/*Declaring array as a parameter in the function*/
#include<stdio.h>

int sum(int arr[])
{
    int sum_of_array = 0;

    for ( int i = 0; i < 4; i++)
    {
        sum_of_array += arr[i];
    }
    return sum_of_array;
}

int main()
{
    int arr[] = {23, 33, 4, 55};
    int result;

    result = sum(arr);

    printf("Result=%d", result);

    return 0;
}
