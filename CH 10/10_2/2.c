#include <stdio.h>

int length(char len[])
{
    int l = 0;

    for (int i = 0; len[l] != '\0'; i++)
    {
        l++;
    }
    return l;
}

int main()
{
    char len[50];

    printf("Enter any String : ");
    scanf("%s", &len);

    int l = length(len);
    printf("Length : %d\n", l);
}