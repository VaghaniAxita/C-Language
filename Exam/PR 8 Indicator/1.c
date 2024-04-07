#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    char *ptr[100];
    int i;

    for (i = 0; i < 100; i++)
    {
        ptr[i] = &name[i];
    }
    printf("enter name: ");
    gets(name);
    printf("lenght of string : %d", strlen(*ptr));
}