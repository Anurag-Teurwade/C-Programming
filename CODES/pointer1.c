#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;

    printf("value at ptr=%d\n", *ptr);
    printf("value at a=%d\n", a);
    printf("Address of ptr=%x\n", &ptr);
    printf("Address of a=%x\n", &a);

    return 0;
}