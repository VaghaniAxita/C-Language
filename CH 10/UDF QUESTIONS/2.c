#include <stdio.h>

void convert(int n)
{
    if (n == 0)
        return;
    convert(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int num;

    printf("Enter a decimal number : ");
    scanf("%d", &num);

    printf("Binary : ");
    convert(num);
}