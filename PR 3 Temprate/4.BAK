#include<stdio.h>
#include<conio.h>

main()
{
	/* check number is magic or not ex:- 123 is magic number. */

	int n,sum=0,mul=1,rem;
	clrscr();

	printf("Enter any Number :");
	scanf("%d",&n);

	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		mul*=rem;
		n/=10;
	}

	if(sum==mul)
	{
		printf("This is a Magic Number\n",n);
	}
	else
	{
		printf("This is not a Magic Number\n",n);
	}
	getch();

}