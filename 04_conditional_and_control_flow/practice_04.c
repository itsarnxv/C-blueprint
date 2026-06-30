/* Write a program that checks whether a given year is a leap year or not. 
A leap year is divisible by 4, but not by 100 unless it is also divisible by 400. */

#include<stdio.h>

int main()
{
    int a ; 
    printf("Enter a year : ");
    scanf("%d" , &a );

    if(a % 4 == 0)
    {
        printf("%d is a leap year" , a);
    }
    else if(a % 400 == 0)
    {
        printf("%d is a leap year" , a);
    }
    else if(a % 100 == 0)
    {
        printf("%d is a leap year" , a);
    }
    else
    {
        printf("%d is not a leap year" , a);
    }

return 0;
}