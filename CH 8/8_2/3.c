#include <stdio.h>
main()
{
    int n, i, squ;

    printf("Enter First Number: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("The array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d,", a[i] * a[i]);
    }
}