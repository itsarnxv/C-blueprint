/*Write a program that demonstrates the difference between pre-increment (++x)
 and post-increment (x++) operations. Print the value of a variable before 
 and after each operation.*/

 #include<stdio.h>
 
 int main()
 {
 int x ;
printf("Enter value of x : ");
scanf("%d" , &x);

printf("Pre - increament = %d\n" , ++x);
printf("After Pre - increament = %d\n" , x);
printf("Post - increament = %d\n" , x++);
printf("After Post - increament = %d\n" , x);
 
 return 0;
 }