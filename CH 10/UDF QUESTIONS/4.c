#include <stdio.h>
void alphabets(char ch)
{
    if (ch > 'z')

        return;
    printf("%c\n", ch);
    alphabets(ch + 1);
}
main()
{
    printf("Alphabets : ");
    alphabets('a');
}