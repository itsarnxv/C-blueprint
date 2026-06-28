#include<stdio.h>
int main()
{
    int r;
    float area;

    printf("Enter radius : ");
    scanf("%d" , &r);

    area = 3.1416 * r * r;

    printf("Area of circle = %.2f" , area);

    return 0;
}