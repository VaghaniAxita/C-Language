#include<stdio.h>                                                         #include<stdio.h>
#include<conio.h>

main()
{       int a,b,c;
	clrscr();
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);

	(a<b)
	    ?(a<c)
		 ?printf("The Minimum value is : %d",a)
		 :printf("The Minimum value is : %d",c)
	    :
	      (b<c)
		  ?printf("The Minimum value is : %d",b)
		  :printf("The Minimum value is : %d",c);

	getch();
}
