/* Structures in C are user-defined data types that allow grouping variables of different types 
under one name. They are used to represent a record. */

#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    //In order to create a variable of type int we do something like :
    int a;

    //In a similar way in order to create a variable of type "struct Student" we do something like :
    struct Student arnav;
    arnav.roll = 1;
    arnav.marks = 99.9;
    strcpy(arnav.name , "Arnav");
    
    printf("%d %f %s" , arnav.roll , arnav.marks , arnav.name);
   
    return 0;
}