#include<stdio.h>
#include<conio.h>

main()

{
	int a,b;
	clrscr();

	printf("Enter First Number : ");
	scanf("%d",&a);
	printf("Enter Decond Number :");
	scanf("%d",&b);

	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d %% %d = %d\n",a,b,a%b);

	getch();
}