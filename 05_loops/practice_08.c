/* Write a program that takes numbers as input continuously. 
Stop reading and exit the loop as soon as a negative number is entered. */


#include<stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter a number (-ve no. to quit) : ");
        scanf("%d" , &n);
    } while (n > 0);
    
    printf("You entered -ve no. , exiting now.\n");

return 0;
}