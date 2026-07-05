// Write a C program to reverse the elements of an array without using another array.

#include<stdio.h>

int main()
{
    int a[10] , i , temp;
    int start = 0 ;
    int end = 9 ;

    printf("Enter the numbers : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d" , &a[i]);
    }

    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array :\n");

    for ( i = 0; i < 10; i++)
    {
        printf("%d " , a[i]);
    }
    
    
    return 0;
}