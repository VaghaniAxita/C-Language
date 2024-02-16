#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;//row=5;
	clrscr();

	for(i=1;i<=5;i++)
	{
		int num=i;
		for(j=1;j<=i;j++)
		{
			printf("%4d",num);
			num+=5-j;
		}
		printf("\n");
	}
	getch();
}