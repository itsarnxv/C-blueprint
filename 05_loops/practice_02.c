/*  Write a program using a while loop that calculates 
the sum of the first N natural numbers entered by the user. */

#include<stdio.h>

int main()
{
    int num , sum = 0 , i = 1;
    printf("Enter a number : ");
    scanf("%d" ,&num );

    while (i <= num)
    {
        sum += i;
        i++;
    }

    printf("Sum od  %d natural number is = %d\n", num , sum);
    

return 0;
}