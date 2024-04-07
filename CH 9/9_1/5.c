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

    if (name[0] >= 65 && name[0] <= 90)
    {
        name[0] = name[0] + 32;
    }

    for (i = 1; i < len; i++)
    {
        if (name[i] == ' ')
        {
            if (name[i + 1] >= 97 && name[i + 1] <= 122)
            {
                name[i + 1] = name[i + 1] - 32;
            }

            int j;
            for (j = i; j < len; j++)
            {
                name[j] = name[j + 1];
            }
        }
    }

    printf("CamelCase String : %s", name);
}