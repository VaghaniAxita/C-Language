#include <stdio.h>

int divisible(int n)
{
    if (n % 3 == 0 || n % 5 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void divisivleby3or5()
{
    for (int i = 1; i <= 100; i++)
    {
        if (divisible(i))
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    printf("Enter number from 1 to 100 : \n");
    divisivleby3or5();
}