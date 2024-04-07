#include<stdio.h>
#include<conio.h>

main()
{       /* sequences like 1,11,111,1111,11111,..... using for loop */

	int i,n=1;
	clrscr();


	for(i=0;i<=4;i++)
	{
		printf("%d,",n);
		n=(n*10)+1;
	}

	getch();
}