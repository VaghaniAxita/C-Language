#include <stdio.h>

void rev(int *arr, int n)
{
    int *a = arr;
    int *b = arr + n - 1;
    int c;

    while (a < b)
    {
        c = *a;
        *a = *b;
        *b = c;
        a++;
        b--;
    }
}

int main()
{
    int n, i;

    printf("Enter the array size : ");
    scanf("%d", &n);

    int arr[n];

    printf("\n\n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    rev(arr, n);

    printf("\n\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}