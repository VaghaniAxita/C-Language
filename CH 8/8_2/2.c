#include <stdio.h>
main()
{
    int n1, n2, n = 0, i, n3 = 40;

    printf("Enter First Number: ");
    scanf("%d", &n1);

    printf("Enter Second Number: ");
    scanf("%d", &n2);
    int year[n3];
    for (i = n1; i <= n2; i++)
    {
        if (i % 4 == 0)
        {
            year[n] = i;
            n++;
        }
    }
    printf("The Array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d,", year[i]);
    }
}