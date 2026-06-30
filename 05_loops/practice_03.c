/* Write a program that takes an integer as input and prints its multiplication table up to 10. */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d" , &n);

    for(int i = 1 ; i <= 10 ; i++)
    {
        printf("%d X %d = %d\n", n , i , n*i);
    }

return 0;
}