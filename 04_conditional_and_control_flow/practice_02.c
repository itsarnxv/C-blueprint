/* Write a program that takes two numbers as input and prints the larger one using an 
if-else statement.Write a program that takes two numbers as input and prints the larger
one using an if-else statement. */

#include<stdio.h>

int main()
{
    int a , b;
    printf("Enter two numbers : ");
    scanf("%d %d" , &a ,&b);

    if(a > b)
    {
        printf("%d is larger" , a);
    }
    else
    {
        printf("%d is smaller" , a);
    }

return 0;
}