#include<stdio.h>

void div()
{
	int n;
	printf("enter any number  : ");
	scanf("%d",&n);
	
	if(n%5==0 && n%3==0)
	{
		printf("===================================================\n");
		printf("this number is divisable by both nuymber 3 & 5 !! ");
		printf("\n===================================================\n");
	}
	else
	{
		printf("===================================================\n");
		printf("this number is not divisable by both nuymber 3 & 5 !! ");
		printf("\n===================================================\n");
	}
}
void main()
{
	div();
}