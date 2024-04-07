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

    if (name[0] >= 97 && name[0] <= 122)
    {
        name[0] = name[0] - 32;
    }

    for (i = 1; i < len; i++)
    {
        if (name[i - 1] == ' ')
        {
            if (name[i] >= 97 && name[i] <= 122)
            {
                name[i] = name[i] - 32;
            }
        }
        else
        {
            if (name[i] >= 65 && name[i] <= 90)
            {
                name[i] = name[i] + 32;
            }
        }
    }

    printf("TitleCase String : %s", name);
}