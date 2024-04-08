#include <stdio.h>

void asc(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void desc(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size, i;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    asc(arr, size);
    printf("Ascending order : ");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    desc(arr, size);
    printf("Descending order : ");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}