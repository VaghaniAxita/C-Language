#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	printf("Enter d: ");
	scanf("%d",&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d is maximum",a);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is maximum",c);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d is maximum",b);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is maximum",c);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
	}



	getch();
}