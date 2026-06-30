// Write a program to print a square pattern of stars of size n using nested loops.

#include<stdio.h>

int main()
{
    int i , j , n;

    printf("Enter n : ");
    scanf("%d" , &n);

    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

return 0;
}