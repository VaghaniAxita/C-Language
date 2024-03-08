#include <stdio.h>

main()
{
    char name[20], rev[20];

    printf("Enter any String: ");
    scanf("%[^\n]", &name);

    int i, len = 0, n = 0;

    for (i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
    }

    for (i = 4; i >= 0; i--, n++)
    {
        rev[n] = name[i];
    }
    int pal = 0;
    for (i = 0; i < len; i++)
    {
        if (name[i] == rev[i])
        {
            pal = 1;
        }
        else
        {
            pal = 0;
            break;
        }
    }

    if (pal == 1)
    {
        printf("\nThis String is Palindrome");
    }
    else
    {
        printf("This String is not Palindrome");
    }
}