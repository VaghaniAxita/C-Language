#include <stdio.h>

int sum(int a, int b)
{
	printf("enter a : ");
	scanf("%d", &a);
	printf("enter b :");
	scanf("%d", &b);

	return a + b;
	printf("================================\n");
}
int sub(int a, int b)
{
	printf("enter a : ");
	scanf("%d", &a);
	printf("enter b :");
	scanf("%d", &b);

	return a - b;
}
int mul(int a, int b)
{
	printf("enter a : ");
	scanf("%d", &a);
	printf("enter b :");
	scanf("%d", &b);

	return a * b;
}
int div(int a, int b)
{
	printf("enter a : ");
	scanf("%d", &a);
	printf("enter b :");
	scanf("%d", &b);

	return a / b;
}
int mod(int a, int b)
{
	printf("enter a : ");
	scanf("%d", &a);
	printf("enter b : ");
	scanf("%d", &b);

	if (b == 0)
	{
		printf("\nCan Not Divided by 0.....");
	}
	else
	{
		return a % b;
	}

	// return a%b;
}
void calc()
{
	int a, b, choice;

	do
	{
		printf("Press 1 to sum :(+)\n");
		printf("Press 2 to sub :(-)\n");
		printf("Press 3 to mul :(*)\n");
		printf("Press 4 to div :(/)\n");
		printf("Press 5 to mod :(%)\n");
		printf("Press 0 to Exit.....\n");

		printf("================================\n\n");
		printf("enter your choice : ");
		scanf("%d", &choice);

		printf("================================\n\n");
		switch (choice)
		{

		case 1:
			printf("The sum : %d\n", sum(a, b));
			printf("---------------------------------\n\n");
			break;

		case 2:
			printf("The sub : %d\n", sub(a, b));
			printf("---------------------------------\n\n");
			break;

		case 3:
			printf("The mul : %d\n", mul(a, b));
			printf("---------------------------------\n\n");
			break;

		case 4:
			printf("The div : %d\n", div(a, b));
			printf("---------------------------------\n\n");
			break;

		case 5:
			printf("The mod : %d\n", mod(a, b));
			printf("----------------------------------\n\n");
			break;

		case 0:
			printf("Exit !! ");
			printf("---------------------------------\n\n");
			break;
		}

	} while (choice != 0);
}
