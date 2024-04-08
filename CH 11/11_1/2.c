#include <stdio.h>

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("X : %d\n", x);
    printf("Y : %d\n", y);

    swap(&x, &y);
    printf("\n\n After Swapping :\n\n");
    printf("X : %d\n", x);
    printf("Y : %d\n", y);
}