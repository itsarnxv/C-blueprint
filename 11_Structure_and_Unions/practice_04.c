/* Create a structure Book containing:

Book ID
Title
Price

Use a pointer to the structure to input and display the details. */

#include <stdio.h>

struct Book
{
    int id;
    char title[20];
    float price;
};

int main()
{
    struct Book b;
    struct Book *ptr;

    ptr = &b;

    printf("Enter Book ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Book Title: ");
    scanf("%s", ptr->title);

    printf("Enter Book Price: ");
    scanf("%f", &ptr->price);

    printf("\nBook Details\n");
    printf("Book ID: %d\n", ptr->id);
    printf("Title: %s\n", ptr->title);
    printf("Price: %.2f\n", ptr->price);

    return 0;
}