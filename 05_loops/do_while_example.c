#include<stdio.h>

int main()
{
    int num;
    do
    {
        printf("Enter a number (0 to quit) : ");
        scanf("%d" , &num);
    } while (num != 0);

    printf("You entered 0 , exiting now.\n");
return 0;
}