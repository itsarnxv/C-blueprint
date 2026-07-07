/* Define a structure Car using typedef.

Create two variables of this new type, input their details, and display them. */

#include <stdio.h>

typedef struct
{
    int id;
    char model[20];
    float price;
} Car;

int main()
{
    Car c1, c2;

    printf("Enter details of Car 1:\n");
    printf("ID: ");
    scanf("%d", &c1.id);
    printf("Model: ");
    scanf("%s", c1.model);
    printf("Price: ");
    scanf("%f", &c1.price);

    printf("\nEnter details of Car 2:\n");
    printf("ID: ");
    scanf("%d", &c2.id);
    printf("Model: ");
    scanf("%s", c2.model);
    printf("Price: ");
    scanf("%f", &c2.price);

    printf("\nCar 1 Details\n");
    printf("ID: %d\n", c1.id);
    printf("Model: %s\n", c1.model);
    printf("Price: %.2f\n", c1.price);

    printf("\nCar 2 Details\n");
    printf("ID: %d\n", c2.id);
    printf("Model: %s\n", c2.model);
    printf("Price: %.2f\n", c2.price);

    return 0;
}
