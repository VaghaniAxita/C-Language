#include <stdio.h>
#include <string.h>

main()
{
    char password[40];

    int i, l = 0, ch = 0, digit = 0, schar = 0, sch = 0;

    printf("Create your password: ");
    scanf("%[^\n]", &password);

    l = strlen(password);

    for (i = 0; password[i] != '\0'; i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            ch++;
        }
        else if (password[i] >= 'a' && password[i] <= 'z')
        {
            sch++;
        }
        else if (password[i] >= '0' && password[i] <= '9')
        {
            digit++;
        }
        else if (password[i] >= 33 && password[i] <= 47)
        {
            schar++;
        }
        else if (password[i] >= 58 && password[i] <= 64)
        {
            schar++;
        }
        else if (password[i] >= 91 && password[i] <= 96)
        {
            schar++;
        }
        else if (password[i] >= 123 && password[i] <= 126)
        {
            schar++;
        }
    }

    if ((ch >= 1) && (sch >= 1) && (digit >= 1) && (l >= 6) && (schar >= 1))
    {
        printf("Your Password is Strong.");
    }
    else
    {
        printf("Your Password is not Strong.");
    }
}