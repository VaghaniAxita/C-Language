#include <stdio.h>

main()
{
    char a[20];

    printf("Enter Your password : ");
    scanf("%[^\n]", &a);

    int i, n = strlen(a), cap = 0, sma = 0, num = 0, spe = 0;

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            cap++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            sma++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            num++;
        }
        else if (a[i] >= 33 && a[i] <= 47)
        {
            spe++;
        }
        else if (a[i] >= 58 && a[i] <= 64)
        {
            spe++;
        }
        else if (a[i] >= 91 && a[i] <= 96)
        {
            spe++;
        }
        else if (a[i] >= 123 && a[i] <= 126)
        {
            spe++;
        }
    }

    if ((cap >= 1) && (sma >= 1) && (num >= 1) && (spe >= 1) && (n >= 6))
    {
        printf("\n!! Your Password Is Strong !!");
    }
    else
    {
        printf("\n!! Your Password Is Not Strong !!");
    }
}
