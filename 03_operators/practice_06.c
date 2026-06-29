/*Write a program that demonstrates type casting by dividing two integers 
and printing both the integer and floating-point results.*/

#include<stdio.h>

int main()
{
int a , b;
printf("Enter two numbers : ");
scanf("%d %d" , &a , &b);

printf("Integer division result : %d\n" , a / b);
printf("Floating-point division result : %f\n" , (float)a / b);


return 0;
}