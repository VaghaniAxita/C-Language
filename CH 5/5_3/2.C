#include<stdio.h>                                                         #include<stdio.h>
#include<conio.h>

main()
{      int n;
	clrscr();
	printf("Telecome Call Service Conversation\n");
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n\n");

	printf("Enter your Choice : ");
	scanf("%d",&n);

	switch(n) {
	       case 1:
			printf("\nEnglish\n");

				printf("Press 1 for Internet Recharge.\n");
				printf("Press 2 for Top-Up Recharge.\n");
				printf("Press 3 for Special Recharge.\n\n");

				printf("\nEnter Your Choice :");
				scanf("%d",&n);

				switch(n) {
					case 1:
						printf("\nYou have successfully done Internet Recharge.");
						break;

					case 2:
						printf("\nYou have successfully done Top-Up Recharge.");
						break;

					case 3:
						printf("\nYou have successfully done Special Recharge.");
						break;

					default:
						printf("\nInvalid Choice!!!!!");

				}

			break;

			case 2:
				printf("\nHindi\n");

					printf("Internet Recharge ke liye 1 dabaiye\n");
					printf("Top-Up Recharge ke liye 2 dabaiye\n");
					printf("Special Recharge ke liye 3 dabaiye\n");

					printf("\nEnter your Choice :");
					scanf("%d",&n);

					switch(n){
						case 1:
							printf("\nApne safaltapurvak Internet Recharge kar liya he");
							break;

						case 2:
							printf("\nApne safaltapurvak Top-Up Recharge kar liya he");
							break;

						case 3:
							printf("\nApne safaltapurvak Special Recharge kar liya he");
							break;

						default:
							printf("\nYe suvidha uplabdh nahi he!!!!!");
					}
				break;

				case 3:
					printf("\nGujarati\n");

					printf("Internet Recharge mate 1 dabavo.\n");
					printf("Top-Up Recharge mate 2 dabavo.\n");
					printf("Special Recharge mate 3 dabavo.\n");

					printf("\nEnter your Choice :");
					scanf("%d",&n);

					switch(n){
						case 1:
							printf("\nTame safaltapurvak Internet Recharge karyu che");
							break;

						case 2:
							printf("\nTame safaltapurvak Top-Up Recharge karyu che");
							break;

						case 3:
							printf("\nTame safaltapurvak Special Recharge karyu che");
							break;

						default:
							printf("\nAa suvidha uplbdh nathi!!!!!");
					 }

				break;

				default:
					printf("Sorry..... Invalid Choice!!!!!");

			}
	getch();
}

