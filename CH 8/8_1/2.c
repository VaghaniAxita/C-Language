#include <stdio.h>
main()
{
    int n;
    float sum = 0, avg;
    printf("Enter Array size: ");
    scanf("%d", &n);

    int a[n];

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Average of an array: %.2f\n", sum / i);
}