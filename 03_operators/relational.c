#include<stdio.h>

int main()
{
int a = 10 , b = 5;

printf("%d\n" , a > b);
printf("%d\n" , a < b);
printf("%d\n" , a >= b);
printf("%d\n" , a <= b);
printf("%d\n" , a == b);
printf("%d\n" , a != b);

printf("Logical AND = %d\n" , (a > b) && (a < 20) );
printf("Logical OR = %d\n" , (a > b) || (a < 0) );
printf("Logical NOT = %d\n" , !(a > b) );


return 0;
}