/* Write a program that takes a single character as input and determines whether it is a vowel, 
consonant, digit, or special character. Use a combination of if-else and logical operators. */

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c" , &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
        (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
        {
            printf("Its a Vowel");
        }
        else
        {
            printf("Its a Consonant");
        }
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("Its a number");
    }

    else
    {
        printf("Its a Special Character");
    }

return 0;
}