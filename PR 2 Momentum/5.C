#include<stdio.h>
#include<conio.h>

main()
{
	float u,bill,total;
	clrscr();

	printf("Enter Used Unit:");
	scanf("%f",&u);

	if(u > 0 && u <= 50)
	{
		bill = u * 0.50;
		printf("The bill is :%.2f\n",bill);
	}
	else if(u >= 51 && u <= 150)
	{
		bill = u * 0.75;
		printf("The bill is :%.2f\n",bill);
	}
	else if(u >= 151 && u <= 250)
	{
		bill = u * 1.20;
		printf("The bill is :%.2f\n",bill);
	}
	else if(u >= 250)
	{
		bill = u * 1.50;
		printf("The bill is :%.2f\n",bill);
	}
	else
	{
		printf("Invalid Choice.....");
	}

	total = bill + (bill * 0.20);

	printf("Total Bill is :%.2f\n",total);

	getch();
}