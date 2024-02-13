#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,result=1;

	clrscr();

	printf("Enter any Number :");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		result=result*i;
	}
		printf("Factorial : %d\n",result);

	getch();
}