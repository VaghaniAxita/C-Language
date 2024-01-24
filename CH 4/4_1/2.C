#include<stdio.h>
#include<conio.h>

main()

{
    int a,b;
    clrscr();

    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);

    int addition = a + b;
    int subtraction = b - a;
    int multiplication = a * b;
    int division = b / a;
    int modulus = b % a;

    printf("Addition of %d and %d Ans %d.\n",a,b,addition);
    printf("Subtraction of %d and %d Ans %d.\n",a,b,subtraction);
    printf("Multiplication of %d and %d Ans %d.\n",a,b,multiplication);
    printf("Devison of %d and %d Ans %d.\n",a,b,devison);
    printf("Modulus of %d and %d Ans %d.\n",a,b,modulus);
    getch();



}