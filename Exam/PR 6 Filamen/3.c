#include <stdio.h>
#include <string.h>

main()
{
    char a[20];
    int i, n = strlen(a);
    int cap = 0, sma = 0, num = 0, sym = 0;

    printf("Enter Your password : ");
    scanf("%[^\n]", &a);

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
            sym++;
        }
        else if (a[i] >= 58 && a[i] <= 64)
        {
            sym++;
        }
        else if (a[i] >= 91 && a[i] <= 96)
        {
            sym++;
        }
        else if (a[i] >= 123 && a[i] <= 126)
        {
            sym++;
        }
    }

    if ((cap >= 1) && (sma >= 1) && (num >= 1) && (sym >= 1) && (n >= 6))
    {
        printf("\n Your Password Is Strong.....");
    }
    else
    {
        printf("\n Your Password Is Not Strong.....");
    }
}
