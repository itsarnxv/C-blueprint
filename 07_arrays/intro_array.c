#include<stdio.h>

int main()
{
    // int age1 = 20
    // int age2 = 25;
    // int age3 = 30;

    //If the size of an array is n , index will go from 0 to n-1
    // If the size of an arrat is 3, index will go from 0 to 2
    int age[3] = {34 , 67 , 89};

    age[2] = 36;

    printf("The value of 1st age is %d\n" , age[0]);
    printf("The value of 2nd age is %d\n" , age[1]);
    printf("The value of 3rd age is %d\n" , age[2]);
    // printf("The value of 4th age is %d\n" , age[3]); //Wrong


    return 0;
}