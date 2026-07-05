#include <stdio.h>

int main()
{
    int number[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Array Introduction\n");
    printf("%d\n", number[0]);
    printf("%d\n", number[1]);
    printf("%d\n", number[2]);
    printf("%d\n", number[3]);
    printf("%d\n", number[4]);
    printf("%d\n", number[5]);
    printf("%d\n", number[6]);
    return 0;
}

//---------------------------------------------------------------------------------

// Taking Input for Arrays

#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Array Introduction\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

//----------------------

#include <stdio.h>

int main()
{
    int numbers[7];

    printf("Take array inputs from the users\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the value of numbers[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("Print array elements on the screen\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

//---------------------------------------------------------------------------

// Traversing an Array

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d", sum);
    return 0;
}

// ----------------------------------------------------------------------

// Modifying Array Elements

#include <stdio.h>

int main()
{
    int arr[3] = {2, 4, 6};
    arr[1] = 10;
    printf("%d", arr[1]); // Output: 10

    return 0;
}