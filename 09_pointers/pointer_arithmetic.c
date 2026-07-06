// Pointer Arithmetic

#include<stdio.h>

int main()
{
    int arr[] = {1 ,2 , 3};
    int *ptr = arr;

    printf("%d" , *ptr);        // 1
    printf("%d" , *(ptr + 1));  // 2
    printf("%d" , *(ptr + 2));  // 3

    return 0;
}

// When you add 1 to a pointer , it doesnt move by 2 byte , 
//it rather moves by the size of the data type it points to