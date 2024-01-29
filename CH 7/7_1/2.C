#include<stdio.h>
#include<conio.h>

main()

{
	int n;
	clrscr();

	printf("Enter any Number :");
	scanf("%d",&n);

	if(n==0)
	{
		printf("%d is Neutral !!");
	}

	else if(n>0)
	{
		printf("%d is Positive !!");
	}

	else
	{
		printf("%d is Negative !!");
	}
	getch();

}