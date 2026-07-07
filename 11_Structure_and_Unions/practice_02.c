/* Create a structure Employee containing:
Employee ID
Name
Salary
Store details of 5 employees in an array of structures and display the employee with the 
highest salary. */

#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct Employee e[5];
    int i, highest = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter Employee %d Details:\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    for(i = 1; i < 5; i++)
    {
        if(e[i].salary > e[highest].salary)
        {
            highest = i;
        }
    }

    printf("\nEmployee with Highest Salary:\n");
    printf("ID = %d\n", e[highest].id);
    printf("Name = %s\n", e[highest].name);
    printf("Salary = %.2f\n", e[highest].salary);

    return 0;
}