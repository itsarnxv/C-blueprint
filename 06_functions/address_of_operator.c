#include<stdio.h>

int main()
{
    int a = 56;
    int b = 55;

    // & is the (address of ) operator
    printf("The address of a is %d\n" , &a);
    printf("The address of b is %d\n" , &b);

    // * is the (value at) operator
    printf("Teh value at address of a is %d\n" , *(&a));
    printf("Teh value at address of b is %d\n" , *(&b));

    return 0;
}