#include<stdio.h>
#include<conio.h>

main()

{
	float area;
	const float pi=3.14;
	int r;
	clrscr();
	printf("Enter R : ");
	scanf("%d",&r);
	area=pi*r*r;
	printf("area of circle : %.2f",area);

	getch();


}
