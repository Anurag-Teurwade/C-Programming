/*Pascal's Triangle pattern*/
#include <stdio.h>
int main()
{
    int i, j, k, rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);

    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j < rows - 1; j++)
        {
            printf(" ");
        }
        int c = 1;

        for (k = 1; k <= i; k++)
        {
            printf("%d ", c);
            c = c * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}