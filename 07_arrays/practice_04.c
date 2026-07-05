/* Write a C program to input a 3 × 3 matrix and print:

the matrix
the sum of each row
the sum of each column */

#include <stdio.h>

int main()
{
    int matrix[3][3];

    printf("Enter the elements of the 3x3 matrix:\n");

    // Input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Sum of each row
    printf("\nSum of each row:\n");
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    // Sum of each column
    printf("\nSum of each column:\n");
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;

        for (int i = 0; i < 3; i++)
        {
            sum += matrix[i][j];
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}