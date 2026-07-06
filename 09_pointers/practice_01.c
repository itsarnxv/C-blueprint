/* Write a C program to declare an integer variable, create a pointer to it, and print:

the value of the variable
the address of the variable
the value stored in the pointer
the value pointed to by the pointer */

#include<stdio.h>

int main()
{
    int  num = 10;
    int *ptr;

    ptr = &num;

    printf("Value of variable = %d\n" , num);
    printf("Address of variable = %p\n" , &num);
    printf("Value stored in pointer = %p\n" , ptr);
    printf("Value of variable = %d\n" , *ptr);

    return 0;
}