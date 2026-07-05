/* Write a C program to input 10 integers into an array and find:

the sum
the average
the largest element
the smallest element */

#include<stdio.h>

int main()
{
    int arr[10];
    int i , sum = 0 ;
    int largest , smallest;
    float average;

    printf("Enter the numbers : \n");
    for (i = 0; i < 10 ; i++)
    {
        scanf("%d" , &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for (i = 0; i < 10 ; i++)
    {
        sum += arr[i];

        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr [i] < smallest)
        {
            smallest = arr [i];
        }

    }

    average = (float)sum / 10;

    printf("Sum = %d\n" , sum);
    printf("Average = %d\n" , average);
    printf("Largest = %d\n" , largest);
    printf("Smallest = %d\n" , smallest);

    return 0;
}