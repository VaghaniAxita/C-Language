#include <stdio.h>
main()
{
    int r, c;

    printf("Enter Array size: ");
    scanf("%d", &r);

    printf("Enter Array size: ");
    scanf("%d", &c);

    int a[r][c], b[r][c], s[r][c];

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
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("Array C is : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}
