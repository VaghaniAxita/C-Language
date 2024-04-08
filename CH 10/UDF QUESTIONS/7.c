#include <stdio.h>

int magic(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n < 10)
    {
        return 0;
    }
    else
        return magic(n / 10);
}

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (magic(num))
        printf("%d is a magic number\n ", num);

    else
        printf("%d is a not magic number\n ", num);
}