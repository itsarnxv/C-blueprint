/* Write a program using goto to print numbers from 1 to 5. 
Then rewrite it using a loop (for or while) to show why loops are better. */

#include<stdio.h>

int main()
{
    int num = 1;
    while (num <= 5)
    {
        printf("%d " , num);
        num++;
    }
    
return 0;
}