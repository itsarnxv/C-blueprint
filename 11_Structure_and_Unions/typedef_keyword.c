// The typedef keyword allows you to create an alias for a data type, making your code more readable

#include<stdio.h>

typedef struct Student
{
    int roll;
    float marks;
    char name[20];
} Students;

typedef int myInt; //nickname or alias for int now is myInt

int main()
{
    printf("Typedef in C\n");
    Students s1;
    Students s2;
    myInt a = 123 , b = 4;
    printf("The value of a is %d and b is %d\n", a ,b);
    return 0;
}