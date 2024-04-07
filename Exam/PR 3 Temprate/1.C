#include<stdio.h>
#include<conio.h>

main()
{      /* Printing all alphabet by skipping 3 alphabet using do while loop */
	char i = 'a';
	clrscr();

	do{
		printf("%c",i);
		i+=4;
	  }
	while(i <= 'z');

	getch();
}