#include <stdio.h>

struct Student
{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_std;
    char stu_school[50];
};

int main()
{

    int n;
    printf("Enter number of student : ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("ID : ");
        scanf("%d", &s[i].stu_id);
        fflush(stdin);
        printf("Name : ");
        scanf("%s", &s[i].stu_name);

        printf("Age : ");
        scanf("%d", &s[i].stu_age);
        fflush(stdin);
        printf("Course : ");
        scanf("%s", &s[i].stu_course);

        printf("City : ");
        scanf("%s", &s[i].stu_city);

        printf("Standerd : ");
        scanf("%d", &s[i].stu_std);

        printf("School : ");
        scanf("%s", &s[i].stu_school);
        fflush(stdin);
    }

    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n", s[i].stu_id);
        printf("Name : %s\n", s[i].stu_name);
        printf("Age : %d\n", s[i].stu_age);
        printf("Course : %s\n", s[i].stu_course);
        printf("City : %s\n", s[i].stu_city);
        printf("Standerd : %d\n", s[i].stu_std);
        printf("School : %s\n", s[i].stu_school);
    }

    return 0;
}