#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Please, Enter Your Number = ");
    scanf("%d", &num);

    int i;
    int j;
    int is_prime;

    if(num < 2)
    {
        printf("\nPrime Numbers Are Positive Numbers And From Range [2 - Infinity]\n");
    }

    else
    {
        for(i=num;i>=2;i--)
        {
            is_prime = 1;
            for(j=2;j<=i-1;j++)
            {
                if(i%j==0)
                {
                    is_prime = 0;
                    break;
                }
            }

            if(is_prime == 1)
            {
                printf("%d ",i);
            }
        }
    }


    return 0;
}
