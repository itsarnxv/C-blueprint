//Nested Structures
// A structure can contain another structure as a member.

#include<stdio.h>
#include<string.h>

struct Address{
    int pincode;
    char city[30];
};

struct Student{
    char name[30];
    struct Address addr;
};

void printStudent(struct Student);

int main()
{
    printf("Nested Structures\n");
    struct Student std;
    //std.name = "Arnav" //You must not do this
    strcpy(std.name , "Arnav");
    std.addr.pincode = 444444;
    strcpy(std.addr.city , "Nagpur");
    printStudent(std);

    return 0;
}

void printStudent(struct Student std)
{
    printf("The name of the student is : %s\n" , std.name);
    printf("The pincode of the student is : %d\n" , std.addr.pincode);
    printf("The city of the student is : %s\n" , std.addr.city);
}