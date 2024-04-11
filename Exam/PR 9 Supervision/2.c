#include <stdio.h>

struct Student
{
    int stu_rollNo;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main()
{
    struct Student s[5];
    float per;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d :\n", i + 1);
        printf("Roll NO  : ");
        scanf("%d", &s[i].stu_rollNo);

        fflush(stdin);
        printf("Name : ");
        scanf("%[^\n]", &s[i].name);

        fflush(stdin);
        printf("Chemistry : ");
        scanf("%d", &s[i].chem_marks);

        printf("Mathematics : ");
        scanf("%d", &s[i].maths_marks);

        printf("Physics : ");
        scanf("%d", &s[i].phy_marks);
        fflush(stdin);
    }
    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        per = (s[i].chem_marks + s[i].maths_marks + s[i].phy_marks) / 3.0;
        printf("%s (%d)\n", s[i].name, s[i].stu_rollNo);
        printf("Chemistry : %d\n", s[i].chem_marks);
        printf("Mathematics : %d\n", s[i].maths_marks);
        printf("Physics : %d\n", s[i].phy_marks);
        printf("Total : %d/300\n", s[i].chem_marks + s[i].maths_marks + s[i].phy_marks);
        printf("Percent : %.2f%%\n\n", per);
    }

    return 0;
}