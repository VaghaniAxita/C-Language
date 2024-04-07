#include <stdio.h>
main()
{
    int r = 5, c = 5, sum = 0;
    int a[r][c];
    int i, j;
    printf("Enter array's elements: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                printf("%d ", a[i][j]);
                sum = sum + a[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("The sum of boundary elements of an Array : %d", sum);
}