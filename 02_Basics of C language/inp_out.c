#include<stdio.h>
int main()
{
    int m1 , m2 , m3;
    char name[20];

    printf("Enter your name : \n");
    scanf("%s" , &name);

    printf("Enter marks of 3 subject : \n");
    scanf("%d %d %d",&m1,&m2,&m3);

    printf("Name = %s \n", name);
    printf("Marks in 3 subject = %d %d %d\n", m1 ,m2 ,m3);
    
    return 0;
}