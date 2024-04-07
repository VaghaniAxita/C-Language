#include <stdio.h>
// function
void cube(int *arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(arr + i * c + j) = *(arr + i * c + j) * *(arr + i * c + j) * *(arr + i * c + j);
        }
    }
}
// function call
int main()
{
    int r, c;

    printf("Enter array size :");
    scanf("%d", &r);

    c = r;

    int arr[r][c];

    printf("Enter array elements : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    cube(&arr[0][0], r, c);

    printf("Cube :\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}