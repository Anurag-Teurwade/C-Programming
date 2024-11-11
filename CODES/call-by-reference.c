#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x; /*saved value at address*/
    *x = *y;   /*put y into x*/
    *y = temp; /*put temp into y*/
}
void main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    printf("Value of a:%d\n", a);
    printf("Value of b:%d", b);
}
