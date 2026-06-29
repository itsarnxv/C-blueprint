#include<stdio.h>

int main()
{
int a = 10 , b = 5;
printf("The value of a/b is %f\n" , (float)a/b); //Replace a with float(a)

//Implicit typecasting or Automatic Typecasting or Implicit Conversion
int x = 5;
float y = 2.4;
float z = x + y;
printf("The value of z is %f\n" , z);

//Explicit Typecasting
printf("The value of y as integer is %d\n" , (int)y);
return 0;

}

