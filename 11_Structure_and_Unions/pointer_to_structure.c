#include<stdio.h>
#include<string.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s1 , s2 , s3;
    struct Student *s1ptr , *s2ptr , *s3ptr;

    s1ptr = &s1;
    s2ptr = &s2;
    s3ptr = &s3;

    // (*s1ptr).roll = 1; //sme as s1.roll = 1
    // (*s2ptr).marks = 99.9;
    strcpy((*s1ptr).name , "Arnav");

    // Instead of above 3 lines , we can use the (->) operator
    s1ptr -> roll = 1; //Same as s1.roll = 1
    s1ptr -> marks = 99.9; 
    //Writing s1ptr->roll is same as writing (*s1ptr).roll

    printf("The value of s1 is %d %f %s: " , s1ptr->roll , s1ptr->marks , s1ptr->name);
    return 0;
}