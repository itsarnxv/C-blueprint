#include<stdio.h>

int main()
{
int a  = 10;

printf("The value of a is %d\n" , a);
printf("The value of a is %d\n" , ++a);
printf("The value of a is %d\n" , a++); //a++ #Post Increment Operator
printf("The value of a is %d\n" , ++a); //++a #Pre Increment Operator

return 0;
}