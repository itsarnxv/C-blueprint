#include<stdio.h>

int main()
{
    int x = 5;
    int *p = &x;
    int **pp = &p;

    printf("Value of x = %d\n" , **pp);
    return 0;
}

//-----------------------------------------------------------------

// Pointers and Arrays

#include<stdio.h>

int main()
{
    int arr[3] = {10 , 20 , 30};
    int *ptr = arr;

    for (int i = 0; i < 3; i++)
    {
        printf("%d " , *(ptr + i));
    }
    
    return 0;
}