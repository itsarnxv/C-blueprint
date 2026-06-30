#include<stdio.h>

int main()
{
int num = 1;

start:
printf("%d " , num);
num++;

if(num <= 5)
{
    goto start;
}

return 0;
}

/*
goto label;

// Other statements 

label:
    // Statements to execute
*/