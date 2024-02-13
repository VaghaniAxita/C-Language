#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,sum;
	sum=0;

	clrscr();   \

	printf("Enter any Value :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}

	printf("Sum 1 to %d : %d",n,sum);

	getch();
}