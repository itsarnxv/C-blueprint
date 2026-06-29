/*Write a program that initializes an integer variable with some value 
and then applies the following compound assignment operations sequentially
Print the value of the variable after each operation.*/

#include<stdio.h>

int main()
{
int a , b;
printf("Enter two numbers : ");
scanf("%d %d" , &a , &b);

printf("Value for += : %d\n" , a += b );
printf("Value for -= : %d\n" , a -= b );
printf("Value for *= : %d\n" , a *= b );
printf("Value for /= : %d\n" , a /= b );
printf("Value for %%= : %d\n" , a %= b );

return 0;
}

