/* Unions are similar to structures but share the same memory location 
for all members. Only one member can hold a value at a time. */

#include<stdio.h>
#include<string.h>

union Student
{
    int roll;
    float marks;
    char name[20];
};


int main()
{
    union Student s1;
    s1.roll = 1;
    printf("Roll : %d\n" , s1.roll);

    s1.marks = 99.5;
    printf("Marks : %.2f\n" , s1.marks);

    strcpy(s1.name , "Arnav");
    printf("Name : %s\n" , s1.name);

    return 0;
}


/* Difference Between Structures and Unions
Feature	       Structure	                                Union
Memory	       Allocates memory for all members	            Allocates memory equal to largest member
Access	       All members can be accessed at once	        Only one member can be used at a time
Use Case	   When storing different data types together	When storing data that can take multiple forms */