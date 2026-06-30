/* 
Write a simple calculator program that uses 
a switch statement to perform operations based on user choice. Operations:
Addition
Subtraction
Multiplication
Division
 */

#include<stdio.h>

int main()
{
    int a , b , choice;
    printf("Enter two numbers : ");
    scanf("%d %d" , &a , &b);

    printf("Enter operation 1 - Add , 2 - Sub , 3 - Multi , 4 - Div = ");
    scanf("%d" , &choice);

    switch (choice)
    {
    case 1:
        printf("Result = %d\n" , a + b);
        break;
    case 2:
        printf("Result = %d\n" , a - b);
        break;
    case 3:
        printf("Result = %d\n" , a * b);
        break;
    case 4:
        printf("Result = %d\n" , a / b);
        break;
    
    default:
    printf("Invalid Choice !");
        break;
    }

return 0;
}