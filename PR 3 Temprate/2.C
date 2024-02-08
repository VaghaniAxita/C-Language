#include<stdio.h>
#include<conio.h>

main()
{      /* count the total number of digits in a number */
	int n,count=0;
	clrscr();

	printf("Enter any Number :");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("TOTAL DIGIT :%d",count);

	getch();
}