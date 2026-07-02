#include<stdio.h>

int factorial(int n);

int main()
{
    printf("The factorial of 5 is %d\n" , factorial(5));
    printf("The factorial of 4 is %d\n" , factorial(4));
    printf("The factorial of 3 is %d\n" , factorial(3));
    return 0;
}

int factorial(int n)
{
    //n! = n * (n -1)!
    if(n == 0 || n == 1)
    {
        return 1; // Base case
    }
    return n * factorial(n - 1);
}