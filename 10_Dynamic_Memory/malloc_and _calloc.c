// malloc()

/* The malloc() function allocates a specified number of bytes and returns a 
pointer to the first byte of the block. It does not initialize the memory. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d integers:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements are:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}

//----------------------------------------------------------------------

//calloc()
/* The calloc() function allocates multiple blocks of memory and initializes them to zero. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int)); //calloc initializes th memory to 0

    if(ptr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d integers:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements are:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
