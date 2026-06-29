#include<stdio.h>

int main()
{

int result = 10 + 5 * 2; //This is evaluated as 10 + (5 * 2)
printf("The result is %d\n" , result);
int result1 = 10 + 5 * 2 / 3;
printf("The result 1 is %d\n" , result1);
return 0;
}

/*Common Precedence Order
1 . Parentheses ()
2 . Unary operator ++ , -- , !
3 . Multipication , Division , Modulas
4 . Addition , Subtraction
5 . Relational Opeartor
6 . Equality Operator
7 . Logical AND 
8 . Logical OR
9 . Assignment = , += , -=
*/

//The Assignment opeartor has right to left Associativity.
