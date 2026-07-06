// Pointers with Functions

#include<stdio.h>

void chnageValue(int *n)
{
    *n = 20;
}

int main()
{
    int a = 10;
    chnageValue(&a);
    printf("a = %d" , a);
    return 0;
}

// --------------------------------------------------

// Pointers and Functions

#include<stdio.h>

void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5, b = 10;
    swap(&a , &b);
    printf("a = %d , b = %d", a ,b);
    return 0;
}

//---------------------------------------------------------

//Pointer to String

#include<stdio.h>

int main()
{
    char *name = "Arnav";
    printf("%s" , name);
    return 0;
}