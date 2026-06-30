/* Recreate the grading system (Exercise 3) using a switch statement by dividing 
the marks by 10 and matching the integer value. */

#include<stdio.h>

int main()
{
    int marks;

    printf("Enter marks : ");
    scanf("%d" , &marks);

    switch(marks / 10)
    {
        case 10:
        case 9:
        printf("Grade A\n");
        break;

        case 8:
        printf("Grade B\n");
        break;

        case 7:
        if(marks >= 75)
        printf("Grade B\n");
        else
        printf("Grade C\n");
        break;

        case 6:
        printf("Grade c\n");
        break;

        default:
        printf("Grade D\n");
        break;
    }

return 0;
}