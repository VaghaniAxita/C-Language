#include<stdio.h>
#include<conio.h>

main()
{
	float F,C;
	clrscr():
	printf("Enter temperature in celsius : ");
	scanf("%f",&C);
	
	F = (C*1.8)+32;
	
	printf("Temperature in Fahrenheit : %.2f",F);

	getch();
}