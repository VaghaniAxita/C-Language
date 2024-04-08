#include <stdio.h>

int lar(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int size, i;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Largest : %d\n", lar(arr, size));
}