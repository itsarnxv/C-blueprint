//Write a program that prints a multiplication table from 1 to 10 in a grid format using nested for loops.

#include<stdio.h>

int main()
{
    for(int i = 1 ; i <= 10 ; i++)
    {
        for(int j = 1 ; j <= 10 ; j++)
        {
            printf("%d " , i * j);
        }
        printf("\n");
    }

return 0;
}