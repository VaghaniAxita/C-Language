#include <stdio.h>

int Arraysum(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum;
}

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int sum = Arraysum(a, n);
    printf("Sum : %d\n", sum);
}