/* Pointers are variables that store the memory address of another variable. 
They are one of the most powerful features of the C language, allowing direct 
access and manipulation of memory. */

#include<stdio.h>

int main()
{
    int x = 10;
    int *p = &x;

    printf("x = %d\n" , x);
    printf("&x = %p\n" , &x);
    printf("&p = %p\n" , &x);
    printf("*p = %d\n" , *p);

    return 0;
}