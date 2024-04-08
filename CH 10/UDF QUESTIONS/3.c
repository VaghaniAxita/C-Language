#include <stdio.h>

void leapYear(int s, int e)
{
    if (s > e)
        return;

    if ((s % 4 == 0))
        printf("%d\n", s);

    leapYear(s + 1, e);
}

int main()
{
    int s, e;

    printf("Enter Starting Year : ");
    scanf("%d", &s);

    printf("Enter Ending Year : ");
    scanf("%d", &e);

    printf("Leap years between %d and %d : ", s, e);

    leapYear(s, e);
}