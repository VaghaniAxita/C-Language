#include <stdio.h>

void main()
{
    int n;
    printf("Enter array Size: ");
    n = arraySizeInput();

    int a[n];

    arrayInput(n, a);
}