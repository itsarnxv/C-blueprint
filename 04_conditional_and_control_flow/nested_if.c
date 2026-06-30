#include<stdio.h>

int main()
{
int marks = 100;
int attendance = 95;

if(marks >= 50)
{
    printf("You passed the exam\n");

    if(attendance >= 75)
    {
        printf("You also maintained good attendance\n");
    }

    else
    {
        printf("But your attendance is below 75%%\n");
    }
}

else
{
    printf("You failed the exam");
}

return 0;
}

/* if (condition1) {
    if (condition2) {
        // Code executed if both condition1 and condition2 are true
    } else {
        // Code executed if condition1 is true but condition2 is false
    }
} else {
    // Code executed if condition1 is false
}
    */