// Write a program that takes two integers as input from the user and prints their sum.

#include<stdio.h>
int main()
{
    int n1 , n2 , sum;
    
    printf("Enter first number : ");
    scanf("%d" , &n1);

    printf("Enter second number : ");
    scanf("%d" , &n2);

    sum = n1 + n2;

    printf("Sum = %d" , sum);

    return 0;

    
}