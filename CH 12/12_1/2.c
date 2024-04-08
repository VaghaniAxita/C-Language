#include <stdio.h>

struct employee
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experirnce;
    char emp_company_name[50];
};

int main()
{

    int n;
    printf("Enter number of employees : ");
    scanf("%d", &n);

    struct employee e[n];

    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("ID : ");
        scanf("%d", &e[i].emp_id);
        fflush(stdin);
        printf("Name : ");
        scanf("%s", &e[i].emp_name);
        printf("Age : ");
        scanf("%d", &e[i].emp_age);
        fflush(stdin);
        printf("Role : ");
        scanf("%s", &e[i].emp_role);
        printf("City : ");
        scanf("%s", &e[i].emp_city);
        printf("Experience : ");
        scanf("%d", &e[i].emp_experirnce);
        printf("Company : ");
        scanf("%s", &e[i].emp_company_name);
        fflush(stdin);
    }

    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n", e[i].emp_id);
        printf("Name : %s\n", e[i].emp_name);
        printf("Age : %d\n", e[i].emp_age);
        printf("Role : %s\n", e[i].emp_role);
        printf("City : %s\n", e[i].emp_city);
        printf("Experience : %d\n", e[i].emp_experirnce);
        printf("Company : %s\n", e[i].emp_company_name);
    }

    return 0;
}