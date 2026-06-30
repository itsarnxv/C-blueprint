#include<stdio.h>

int main()
{
    int i , j;
    for(i = 1 ; i <= 4 ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

return 0;
}

/*
for (initialization1; condition1; update1)
{
    for (initialization2; condition2; update2)
    {
        // Statements
    }
}
 */

#include<stdio.h>
int main()
{
    int i , j;
    for(i = 1 ; i <= 3 ; i++)
    {
        for(j = 1 ; j <= 3 ; j++)
        {
            printf("(%d %d) " , i , j);
        }
        printf("\n");
    }
return 0;
}