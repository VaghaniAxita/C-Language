// Write a C program that writes any 3 students'
// name along with thier course in a file called data.txt by taking input from user dynamically.

#include <stdio.h>

int main()
{

    char name[50];
    char course[50];
    FILE *file;

    file = fopen("data.txt", "w");

    if (file == NULL)
    {
        printf("File does not OPEN !!!!!.\n");
    }
    else
    {
        printf("File OPEN SUCCESSFULLY !!!!!.\n");
    }
    
    
    fprintf(file, "Student   Name     Course   \n");
    fprintf(file,"--------------------------\n\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("\n=============================\n");
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Course: ");
        scanf("%s", course);

        fprintf(file, " %d        %s        %s\n", i + 1, name, course);
       
    }

    printf("\n\n");

        printf("-----Student details written to file successfully.-------\n");

    return 0;
}
