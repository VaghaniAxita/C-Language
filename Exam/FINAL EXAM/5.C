//  Develop a C program that defines a structure representing a car (with attributes like model,year, and price).
// List N number of cars' details using Array of object.

#include <stdio.h>

struct Car
{
    char model[50];
    int year;
    float price;
};

int main()
{
    int N;

    printf("Enter the number of cars: ");
    scanf("%d", &N);

    struct Car cars[N];

    for (int i = 0; i < N; ++i)
    {
        printf("\nEnter details of car %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    printf("\n-----------Details of all cars:--------------\n");
    for (int i = 0; i < N; ++i)
    {
        printf("\nCar %d\n", i + 1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
    }

    return 0;
}
