#include<stdio.h>
#include<conio.h>

main()
{       /* sequences like 1,11,111,1111,11111,..... using for loop */

	int i=1,n,j;
	clrscr();

	printf("Enter any Number :");
	scanf("%d",&n);

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("1");
		}
	     printf(",");
	}

	getch();


}