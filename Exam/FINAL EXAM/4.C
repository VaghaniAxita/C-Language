// Write a C program to find sqaure of each elements of an 1D array using Pointer.

#include <stdio.h>

int main()
{
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements of the array:\n", N);
    for (int i = 0; i < N; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Square of each element of the array:\n");
    for (int i = 0; i < N; ++i)
    {
        printf("%d ", *(arr + i) * *(arr + i));
    }
    printf("\n");

    return 0;
}
