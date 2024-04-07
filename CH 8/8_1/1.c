#include <stdio.h>
main()
{
    int n;

    printf("Enter Array size: ");
    scanf("%d", &n);

    int a[n];

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int length = 0;

    for (i = 0; i < n; i++)
    {

        length = n;
    }

    printf("Length of array: %d\n", length);
}