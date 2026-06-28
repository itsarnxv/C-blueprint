// Write a program that swaps the values of two integer variables using a third temporary variable.

#include<stdio.h>
int main()
{
    int a = 5;
    int b = 10;
    int temp;

    printf("Before Swap : a = %d , b = %d\n" , a , b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swap : a = %d , b = %d\n", a , b);

    return 0;
}