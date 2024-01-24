#include<stdio.h>
#include<conio.h>

main()

{
	int number;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&number);

       int incremented = number + 1;
       int decremented = number - 1;

	printf("Increment : %d\n",incremented);
	printf("Decrement : %d\n",decremented);

	getch();


}