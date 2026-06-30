// Write a program that takes a number as input and prints its factorial. Use a for loop.

#include<stdio.h>

int main()
{
    int n;
    int factorial = 1;
    printf("Enter a number : ");
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i++)
    {
        factorial *= i;
    }

    printf("The of valur of factorial %d is %d\n" , n , factorial);
    
return 0;
}