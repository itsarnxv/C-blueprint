/* Write a C program to input a string from the user and 
print each character on a new line. */

#include <stdio.h>

int main()
{
    char str[50];

    printf("Enter the string : ");
    scanf("%s" , str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}