#include<stdio.h>
#include<conio.h>
main()
{
	int GST , ticket , price ,n;
	char name[50] ,day[10] , date[20];
	long int Ph_No;

	clrscr();

	printf("Select Movies:\n");
	printf("1.Hollywood\n");
	printf("2.Bollywood\n");
	printf("3.Gujarati\n");
	printf("4.South\n");

	printf("Movie Type: ");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
			clrscr();
			printf("HOLLYWOOD\n");
			printf("1.The Marvels\n");
			printf("2.Killers Of The Flower Moon\n");
			printf("3.The Creator\n");
			printf("4.The Killer\n");
			printf("5.The Equalizer\n");

			printf("Movie Name: ");
			scanf("%d",&n);
			switch(n)
			{
				case 1:
					printf("The Marvels\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning:\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;


									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}

							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;


									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;


									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;
									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;


									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;



									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;


									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}

					break;

				case 2:
					printf("Killers Of The Flower Moon\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;


									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;
									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;


									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;


									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;



									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;


									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;



									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;


									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;

				case 3:
					printf("The Creator\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;



									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;


									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;


									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;


									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;



									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;


									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;



									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;


									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;

				case 4:
					printf("The Killer\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;



									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;


									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;



									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;


									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;


									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;



									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;

									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;


									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;



									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;

				case 5:
					printf("The Equalizer\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;

				default:
					printf("Invalid Choice......");
			}
			break;

		case 2:
			clrscr();
			printf("BOLLYWOOD\n");
			printf("1.Fighter\n");
			printf("2.Dunki\n");
			printf("3.Animal\n");
			printf("4.Sam Bahadur\n");
			printf("5.12th Fail\n");

			printf("Movie Name: ");
			scanf("%d",&n);
			switch(n)
			{
				case 1:

					printf("Fighter\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;

				case 2:
					printf("Dunki\n");
					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				case 3:
					printf("Animal\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


			       case 4:
					printf("Sam Bahadur\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				case 5:
					printf("12th Fail\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				default:
					printf("Invalid Choice......");
			}
			break;

		case 3:
			clrscr();
			printf("Gujarati\n");
			printf("1.Ittaa Kittaa\n");
			printf("2.Mara Pappa Superhero\n");
			printf("3.Hu Ane Tu\n");
			printf("4.Hurry Om Hurry\n");
			printf("5.3 Ekka\n");

			printf("Movie Name: ");
			scanf("%d",&n);
			switch(n)
			{
				case 1:
					printf("Ittaa Kittaa\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				case 2:
					printf("Mara Pappa Superhero\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				case 3:
					printf("Hu Ane Tu\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				case 4:
					printf("Hurry Om Hurry\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;



				case 5:
					printf("3 Ekka\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				default:
					printf("Invalid Choice......");
			}
			break;

		case 4:
			clrscr();
			printf("SOUTH\n");
			printf("1.Leo\n");
			printf("2.Salaar\n");
			printf("3.Adipurush\n");
			printf("4.Hanuman\n");
			printf("5.Jailer\n");

			printf("Movie Name: ");
			scanf("%d",&n);
			switch(n)
			{
				case 1:
					printf("Leo\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				case 2:
					printf("Salaar\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;



				case 3:
					printf("Adipurush\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);

				case 4:
					printf("Hanuman\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one : \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				case 5:
					printf("Jailer\n");

					clrscr();
					printf("Show Timming:\n");
					printf("1.Morning\n");
					printf("2.Afternoon\n");
					printf("3.Evening\n");
					printf("4.Night\n");

					printf("Choice one: \n");
					scanf("%d",&n);
					switch(n)
					{
						case 1:

							clrscr();
							printf("Morning\n");

							printf("1.7:00am\n");
							printf("2.8:30am\n");
							printf("3.9:15am\n");
							printf("4.10:00am\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("7:00am\n");

									printf("Price:\n");
									printf("200\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=200 * n;

									break;


								case 2:

									printf("8:30am\n");

									printf("Price:\n");
									printf("220\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=220 * n;


									break;

								case 3:
									 printf("9:15am\n");

									 printf("Price:\n");
									 printf("250\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=250 * n;

									 break;

								case 4:
									 printf("10:00am\n");

									 printf("Price:\n");
									 printf("270\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=270 * n;


									 break;
							}
							break;

						case 2:

							clrscr();
							printf("Afternoon\n");

							printf("1.12:20pm\n");
							printf("2.1:05pm\n");
							printf("3.2:30pm\n");
							printf("4.3:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("12:20pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;


								case 2:

									printf("1:05pm\n");

									printf("Price:\n");
									printf("320\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=320 * n;

									break;

								case 3:
									 printf("2:30pm\n");

									 printf("Price:\n");
									 printf("370\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=370 * n;

									 break;

								case 4:
									 printf("3:00am\n");

									 printf("Price:\n");
									 printf("400\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=400 * n;


									 break;
							}

							break;

						case 3:

							clrscr();
							printf("Evening\n");

							printf("1.4:00pm\n");
							printf("2.4:40pm\n");
							printf("3.5:30pm\n");
							printf("4.6:00pm\n");

							printf("Enter Show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("4:00pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;

									break;


								case 2:

									printf("4:40pm\n");

									printf("Price:\n");
									printf("340\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=340 * n;


									break;

								case 3:
									 printf("5:30pm\n");

									 printf("Price:\n");
									 printf("360\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=360 * n;


									 break;

								case 4:
									 printf("6:00pm\n");

									 printf("Price:\n");
									 printf("380\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=380 * n;

									 break;
							}
							break;

						case 4:

							clrscr();
							printf("Night\n");

							printf("1.8:15pm\n");
							printf("2.9:30pm\n");
							printf("3.10:15pm\n");
							printf("4.11:00pm\n");

							printf("Enter show Timming: ");
							scanf("%d",&n);

							switch(n)
							{
								case 1:

									printf("8:15pm\n");

									printf("Price:\n");
									printf("280\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=280 * n;


									break;


								case 2:

									printf("9:30pm\n");

									printf("Price:\n");
									printf("300\n");

									printf("How many ticket do you want :\n ");
									scanf("%d",&n);

									ticket=300 * n;


									break;

								case 3:
									 printf("10:15pm\n");

									 printf("Price:\n");
									 printf("320\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=320 * n;

									 break;

								case 4:
									 printf("11:00pm\n");

									 printf("Price:\n");
									 printf("340\n");

									 printf("How many ticket do you want :\n ");
									 scanf("%d",&n);

									 ticket=340 * n;


									 break;
							}
							break;

					}
					break;


				default:
					printf("Invalid Choice......");
			}
			break;

		default:
			printf("Invalid Choice.......");

	}

	clrscr();

	printf("Enter your name: ");
	scanf("%s",&name);

	printf("Enter your Phone Number: ");
	scanf("%ld",&Ph_No);

	printf("Enter Date: ");
	scanf("%s",&date);

	printf("Enter Day: ");
	scanf("%s",&day);

	clrscr();
	textcolor(YELLOW);
	textbackground(WHITE);
	printf("--------------------------------------------------------------------------------\n");
       cprintf("                                    Ticket                                      \n");
	printf("--------------------------------------------------------------------------------\n");
	textcolor(5);
	textbackground(0);
       cprintf("                                                             Rajhans cinema   \n");
	printf("\nCoustomer Name : %s                                                 \n",name);
	printf("\nPh_No : %ld                                                         \n",Ph_No);
	printf("\nDate : %s                                                            \n",date);
	printf("\nDay : %s\n",day);
	printf("\n                                                       ticket+GST Total : %d     \n",ticket);
	printf("--------------------------------------------------------------------------------\n");
	getch();
}