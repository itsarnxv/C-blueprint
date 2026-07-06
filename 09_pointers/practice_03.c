/* Write a C program to traverse an array using only pointer arithmetic 
(do not use array indexing arr[i]). */

#include<stdio.h>

int main()
{
    int arr[5] , i;
    int *ptr;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d" , &arr[i]);
    }

    ptr = arr;

    printf("Array elemnts are: \n");

    for ( i = 0; i < 5; i++)
    {
        printf("%d" , *ptr);
        ptr++;
    }
    
    return 0;
}