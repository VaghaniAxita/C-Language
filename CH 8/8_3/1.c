#include <stdio.h>
main()
{
    int r, c, sum = 0, avg;

    printf("Enter Array size: ");
    scanf("%d", &r);

    printf("Enter Array size: ");
    scanf("%d", &c);

    int a[r][c];

    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("Average of an array: %d\n", sum / i / j);
}