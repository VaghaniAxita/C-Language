// Create a C program to find the largest element in an 1D array.

#include <stdio.h>


int main()
{
    int arr[MAX_SIZE];
    int size, i;
    int max;

    printf("Enter the size of the array: ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter %d elements of the array: \n", size);
    for (i = 0; i < size; ++i)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0;
}
