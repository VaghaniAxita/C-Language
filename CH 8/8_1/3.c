#include <stdio.h>
main()
{
    int n;

    printf("Enter Array size: ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    int i;
    printf("\n\n  --:Enter array A's elements:--  \n\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n  --:Enter array B's elements:--  \n\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("Array C is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ,", c[i]);
    }
}