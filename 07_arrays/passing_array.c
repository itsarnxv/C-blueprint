#include<stdio.h>

void printArray(int arr [] , int n);
int main()
{
    int arr[7] = {435 , 342 , 2, 5 , 23 ,5 , 22};
    printf("Passing arrays to function\n");
    printArray(arr , 7);
    printf("\nhe value of arr[0] at the end is %d" , arr[0]);
    return 0;
}

void printArray(int arr[] , int n)
{
    for (int i = 0 ; i < n ; i++ )
    {
        printf("%d " , arr[i] );
    }
    arr[0] = 98888; // Memory is Overwritten