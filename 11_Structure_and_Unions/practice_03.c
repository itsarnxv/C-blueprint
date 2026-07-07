/* Create the following structures:

Date → day, month, year
Student → roll number, name, and a Date structure for date of birth.

Input and display the student's complete information. */

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int rollNo;
    char name[20];
    struct Date dob;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Date of Birth: %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}