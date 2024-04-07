#include <stdio.h>
#include <string.h>

main()
{
    char email[100], password[50];
    char desiredEmail[] = "admin@gmail.com";
    char desiredPass[] = "123456";

    printf("Enter your email: ");
    scanf("%s", &email);

    printf("Enter your password: ");
    scanf("%s", &password);

    if (strcmp(email, desiredEmail) == 0 && strcmp(password, desiredPass) == 0)
    {
        printf("Login Successful..");
    }
    else
    {
        printf("Login failed.Invaild Email & Password");
    }
}