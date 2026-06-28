// 1 : Write a program that declares variables for a student’s age, and grade, assigns values to them, and prints them.

#include<stdio.h>
int main()
{
    int age;
    char grade;

    printf("Enter your age : \n");
    scanf("%d" , &age);

    printf("Enter your grade : \n");
    scanf(" %c" , &grade);

    printf("Age : %d\n", age);
    printf("Grade : %c\n", grade);

    return 0;
}