#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, num, size, pos;

    printf("Enter the size of array:");
    scanf("%d", &size);

    printf("Enter the elements of array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert:");
    scanf("%d", &num);

    printf("Enter the postion where to insert:");
    scanf("%d", &pos);

    if (pos > size + 1 || pos <= 0)
    {
        printf("Invalid postion ! please enter postion between 1 to %d", size);
    }
    else
    {
        for (i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = num;
        size++;
    }

    printf("\nArray elements after insertion:");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}