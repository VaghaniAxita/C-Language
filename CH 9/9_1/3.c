#include <stdio.h>

main()
{
    char name[40];

    printf("Enter any String : ");
    scanf("%[^\n]", &name);

    int i, len = 0;

    for (i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    for (i = 0; i < len; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }
        else if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
    }

    printf("ToggleCase String : %s", name);
}