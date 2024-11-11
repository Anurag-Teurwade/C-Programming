/* Hollow Right Triangle star pattern*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number rows:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == n || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}