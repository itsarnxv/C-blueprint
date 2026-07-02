#include<stdio.h>

int sum (int a , int b);

int main()
{
    printf("The sum of two numbers 6 and 7 is %d\n" , sum (6,7));
    printf("The sum of two numbers 16 and 7 is %d\n" , sum (16,7));
    printf("The sum of two numbers 6 and 17 is %d\n" , sum (6,17));
    printf("The sum of two numbers 26 and 7 is %d\n", sum(26, 7));

    return 0;
}

int sum(int a , int b)
{
    int sum ;
    sum = a + b;
    return sum;
}