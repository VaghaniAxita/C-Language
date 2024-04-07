#include<stdio.h>
#include<conio.h>

main()
{
	float B_S,HRA,DA,TA,T_S=0;
	clrscr();
	
	printf("Enter your Base salary : ");
	scanf("%f",&B_S);
	
	HRA = B_S*10/100;
	DA = B_S*5/100;
	TA = B_S*8/100;
	T_S = B_S + HRA + DA + TA;
	
	printf("Total Salary : %.2f",T_S);
	
	getch();
}