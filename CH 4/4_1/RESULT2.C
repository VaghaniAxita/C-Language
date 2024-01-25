#include<stdio.h>
#include<conio.h>

main()

{
	int a,b,result;
	clrscr();
	printf("Enter the value of A :");
	scanf("%d",&a);
	printf("Enter the value of B :");
	scanf("%d",&b);

	result=(a+b)*(a+b)*(a+b);
	printf("Result : %d",result);

	getch();

}