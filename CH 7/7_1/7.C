#include<stdio.h>
#include<conio.h>
main()
{
	//char ch='A';
	char i,j;
	clrscr();

	for(i=65;i<=69;i++)
	{
		for(j=i;j>=65;j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}
