#include<stdio.h>

int main()
{
    for(int i = 1 ; i <= 10 ; i++)
    {
        if(i == 5)
        {
            break; //Exit this loop
        }
        printf("%d\n" , i);
    }

    printf("End of loop...");

return 0;
}

//----------------------------------------------------------------------------------

#include<stdio.h>

int main()
{
        for(int i = 1 ; i <= 10 ; i++)
    {
        if(i == 5)
        {
            continue;; //Exit this iteration and continue the loop from next iteration
        }
        printf("%d\n" , i);
    }

    printf("End of loop...");

return 0;
}