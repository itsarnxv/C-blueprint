#include<stdio.h>

int main()
{
int a = 20;

a += 5;
printf("a after =+ 5 : %d\n" , a);

a -= 3;
printf("a after -= 3: %d\n" , a);

a *= 2;
printf("a after *= 2 : %d\n", a);

a /= 4;
printf("a after /= 4 : %d\n" , a);

a %= 3;
printf("a fter %%= 3 : %d\n " , a);

return 0;
}