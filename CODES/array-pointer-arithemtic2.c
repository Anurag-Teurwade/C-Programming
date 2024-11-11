#include <stdio.h>
/*Here value will be increased by int size*/
int main()
{
    int a = 34;
    int *ptra = &a;

    printf("%d\n", ptra);
    printf("%d", ptra + 1);

    return 0;
}