#include <stdio.h>

int main()
{
    FILE *even_file = fopen("even.txt", "w");
    FILE *odd_file = fopen("odd.txt", "w");

    for (int i = 50; i < 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(even_file, "%d", i);
        }
        else
        {
            fprintf(odd_file, "%d", i);
        }
    }

    fclose(even_file);
    fclose(odd_file);

    printf("File is open successfully..");
    return 0;
}