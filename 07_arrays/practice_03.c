/* Write a C program that:

Inputs 10 integers into an array.
Passes the array to a function.
The function returns the largest element.
Print the largest element in main(). */

#include <stdio.h>

int findLargest(int arr[])
{
    int i, largest = arr[0];

    for(i = 1; i < 10; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
    int arr[10], i, largest;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = findLargest(arr);

    printf("Largest element = %d", largest);

    return 0;
}