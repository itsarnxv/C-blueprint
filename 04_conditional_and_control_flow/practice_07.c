/* A student is eligible for admission if:

Their math marks ≥ 60
Their physics marks ≥ 50
Their chemistry marks ≥ 40
And the total marks ≥ 200
Use nested if statements to check eligibility. */

#include<stdio.h>

int main()
{
    int m , p , c , total;
    printf("Enter marks in Math, Physics, Chemistry : ");
    scanf("%d %d %d" , &m , &p , &c);
    total = m + p + c;

    if(m >= 60)
    {
        if(p >= 50)
        {
            if(c >= 40)
            {
                if(total >= 200)
                {
                    printf("Eligible for admission\n");
                }
                else
                {
                    printf("Not eligible. Total marks are less than 200.\n");
                }
            }
        else
        {
            printf("Not eligible. Chemistry marks are less than 40.\n");
        }
    }
    else
    {
        printf("Not eligible. Physic marks are less than 50.\n");
    }
}
else
{
    printf("Not eligible. Maths marks are less than 60.\n");
}

return 0;
}