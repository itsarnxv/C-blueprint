/* Write a program that takes a student’s marks (0–100) and prints the grade as per the 
ollowing rules:
90 and above → Grade A
75 to 89 → Grade B
60 to 74 → Grade C
Below 60 → Grade D
Use an if-else-if ladder. */

#include<stdio.h>

int main()
{
    int m;
    printf("Enter marks : ");
    scanf("%d", &m);

if (m >= 90)
{
    printf("Grade A\n");
}
else if (m >= 75 && m <= 89)
{
    printf("Grade B\n");
}
else if (m >= 60 && m <= 74)
{
    printf("Grade C\n");
}
else if (m >= 0 && m < 60)
{
    printf("Grade D\n");
}
else
{
    printf("Invalid marks!\n");
}


return 0;
}
