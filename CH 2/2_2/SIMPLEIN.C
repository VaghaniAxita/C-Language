#include<stdio.h>
#include<conio.h>

main()
{
	float p,r,n,simpleinterest;
	clrscr();
	printf("Enter the value of P :");
	scanf("%f",&p);
	printf("Enter the value of R :");
	scanf("%f",&r);
	printf("Enter the value of N :");
	scanf("%f",&n);

	simpleinterest=p*r*n/100;

	printf("Simple Interest :%f",simpleinterest);

	getch();
}