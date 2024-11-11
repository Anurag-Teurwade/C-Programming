#include<stdio.h>
int main()
{
    int arr[]={2,4,6,8,10};
    int *arrayptr=arr;

    printf("Value of postion 3 of the array is %d\n",arr[3]);
    printf("Address of first element of the array is %d\n",&arr[0]);
    printf("Address of first element of the array is %d\n",arr);
    printf("Address of second element of the array is %d\n",&arr[1]);
    printf("Address of second element of the array is %d\n",arr+1);
    printf("Address of thrid element of the array is %d\n",&arr[2]);
    printf("Address of first element of the array is %d\n",arr+2);


    printf("\nThe value at address of first element of the array is %d\n",*(&arr[0]));
    printf("The value at address of first element of the array is %d\n",arr[0]);
    printf("The value at address of first element of the array is %d\n",*(arr));
    printf("The value at address of second element of the array is %d\n",*(&arr[1]));
    printf("The value at address of second element of the array is %d\n",arr[1]);
    printf("The value at address of second element of the array is %d\n",*(arr+1));
    return 0;
}