/* Write a program that takes a number and prints whether it lies between 1–10, 11–20, 
or greater than 20 using an if-else-if ladder. */

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d" , &a);

    if(a >= 1 && a <= 10)
    {
        printf("Number lies between 1-10");
    }
    else if(a >= 11 && a <= 20)
    {
        printf("Number lies between 11-20");
    }
    else
    {
        printf("Number is greater than 20");
    }

return 0;
}