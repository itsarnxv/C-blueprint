/*Write a program that checks whether a person is eligible to vote. 
A person is eligible if their age is 18 or above and they are a citizen 
(use 1 for Yes, 0 for No). Print 1 for yes and 0 for no*/

#include<stdio.h>

int main()
{
int age ;
printf("Enter age : ");
scanf("%d" , &age);

printf("Are you a citizen (1 for Yes / 0 for No): %d" , (age > 18));

return 0;
}