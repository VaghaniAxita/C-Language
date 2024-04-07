#include <stdio.h>
main()
{
    int r, c;
    int sum = 0;
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
            if (i == j)
                sum += a[i][j];
        }
    }
    printf("Sum of an array: %d", sum);
}