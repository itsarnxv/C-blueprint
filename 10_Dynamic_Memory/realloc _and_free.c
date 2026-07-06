//realloc()
/* The realloc() function is used to resize a previously allocated memory block. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 3;
    int *ptr = malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        return 1;
    }

    int *temp = realloc(ptr, 10 * sizeof(int));

    if(temp != NULL)
    {
        ptr = temp;
    }
    else
    {
        printf("Reallocation failed!\n");
        free(ptr);
        return 1;
    }

    free(ptr);

    return 0;
}

//--------------------------------------------------------------------

//free()

/* The free() function deallocates memory that was previously allocated dynamically. 
It is important to free unused memory to avoid memory leaks. */

/* Common Mistakes
Forgetting to free memory.
Accessing memory after it has been freed.
Using uninitialized pointers.
Not checking if malloc() or calloc() returned NULL. */