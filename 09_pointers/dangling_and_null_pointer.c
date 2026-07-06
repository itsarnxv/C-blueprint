// Dangling and Null Pointers
/* A pointer that does not point to any valid memory address is called a NULL pointer.
 It is used for safety to avoid undefined behavior. */

#include <stdio.h>

int main()
{
    int a = 0;
    int *ptr = NULL; // NULL pointer it points to nothing
    if (ptr == NULL)
    {
        printf("Hello");
    }

    void *ptr2; // This pointer is ready to store address of any data type

    float b = 4.22;
    ptr2 = &b;
    printf("The value of ptr is %f\n" , *((float*)ptr2));
    return 0;
}

// Dangling pointer is a pointer that points to a memory location which is no longer valid.

// Wild pointer is a pointer which hasnt been assigned a value yet

// Void pointer is a  pointer which can hold any data type
