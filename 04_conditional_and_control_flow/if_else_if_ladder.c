#include<stdio.h>

int main()
{
int marks = 100;

if(marks >= 90)
{
    printf("Grade is A\n");
}

else if(marks >= 80)
{
    printf("Grade is B\n");
}

else if(marks >= 70)
{
    printf("Grade is C\n");
}

else if(marks >= 60)
{
    printf("Grade is D\n");
}

else
{
    printf("You failed the exam !\n");
}

return 0;
}

/*
if (condition1) {
    // Code if condition1 is true
}
else if (condition2) {
    // Code if condition2 is true
}
else if (condition3) {
    // Code if condition3 is true
}
...
else {
    // Code if none of the conditions are true
}
    */