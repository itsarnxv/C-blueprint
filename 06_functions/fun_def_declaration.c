#include<stdio.h>

void greet(); // Function declaration
int sum(int a , int b); //Function declaration

int main()
{
    greet();
return 0;
}

// Function Definition

void greet()
{
    printf("Good Morning\n");
}

///Function Definition
int sum(int a , int b)
{
    int sum;
    sum = a + b;
    return sum;
}