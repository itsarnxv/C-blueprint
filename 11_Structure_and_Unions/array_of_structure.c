#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    printf("Array of Structures\n");
    struct Student class[90];

    class[0].roll = 1;
    class[0].marks = 99.5;
    strcpy(class[0].name , "Arnav");

    printf("The 1st student is %s and his roll no is %d and his marks are %.1f\n", class[0].name , class[0].roll , class[0].marks);

    class[1].roll = 1;
    class[1].marks = 98.5;
    strcpy(class[1].name , "XYZ");

    printf("The 2st student is %s and his roll no is %d and his marks are %.1f\n", class[1].name , class[1].roll , class[1].marks);
    
    return 0;
}