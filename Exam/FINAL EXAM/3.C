// Write a C program that defines a function to reverse a string without using any library functions.

#include <stdio.h>

int stringLength(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void reverseString(char str[])
{
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
