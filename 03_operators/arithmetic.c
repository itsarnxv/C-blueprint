#include<stdio.h>
int main()
{
    int a = 4 , b = 2;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    printf("Sum of two numbers = %d\n" , sum);
    printf("Sub of two numbers = %d\n" , sub);
    printf("Mul of two numbers = %d\n" , mul);
    printf("Div of two numbers = %d\n" , div);
    printf("Mod of two numbers = %d\n" , mod);
    
    return 0;
}