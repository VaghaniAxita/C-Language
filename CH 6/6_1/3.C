#include<stdio.h>
#include<conio.h>

main()
{
	int a = 1,n;
	clrscr();

	printf("Enter any Number :");
	scanf("%d",&n);

	while( a <= n )
	{
		printf("%d\t",a);
		a++;
	}
	printf("\nA\t :%d",a);

	getch();


}