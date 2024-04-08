#include <stdio.h>

void square(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        *(arr + i) = (*(arr + i)) * (*(arr + i));
}

int main()
{
    int size;

    printf("Enter the array's size : ");
    scanf("%d", &size);
    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    square(a, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}