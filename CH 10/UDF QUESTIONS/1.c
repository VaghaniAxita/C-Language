#include <stdio.h>

void rev(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printf("%d", n % 10);
        rev(n / 10);
    }
}

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);
    rev(n);
}