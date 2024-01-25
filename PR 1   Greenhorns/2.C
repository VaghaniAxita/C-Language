#include<stdio.h>
#include<conio.h>

main()
{
	int BS,HRA,DA,TA,GS;
	clrscr();

	printf("----------------------------\n");

	printf("Enter the Basic Salary :");
	scanf("%d",&BS);
	printf("Enter the House Rent Allowance :");
	scanf("%d",&HRA);
	printf("Enter the Dearness Allowance :");
	scanf("%d",&DA);
	printf("Enter the Traveling Allowance :");
	scanf("%d",&TA);

	printf("------------------------------\n");

	HRA = BS*10/100;
	DA = BS*5/100;
	TA = BS*8/100;

	GS = BS+HRA+DA+TA;

	printf("Gross Salary : %d",GS);

	printf("\n-----------------------------\n");

	getch();


}