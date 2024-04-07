#include <stdio.h>
main()
{
    int n1, n2, n3, i, j;

    printf("Enter Array1 size: ");
    scanf("%d", &n1);

    printf("Enter Array2 size: ");
    scanf("%d", &n2);

    n3 = n1 + n2;
    int a[n1], b[n2], c[n3];

    printf("\n\n --:Enter Array A's Elememts:--\n\n");
    for (i = 0; i < n1; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n --:Enter Array B's Elememts:--\n\n");
    for (i = 0; i < n2; i++)
    {
        printf("Enter b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (i = 0, j = n1; i < n2; i++, j++)
    {
        c[j] = b[i];
    }
    printf("Array C is : ");
    for (i = 0; i < n3; i++)
        printf(" %d,", c[i]);
}