#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter Your Number = ");
    scanf("%i", &num);

    int i;
    int is_prime = 1;
    for(i=num-1; i>=2; i--)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    if (is_prime == 1)
    {
        printf("\nThis Number Is A Prime Number\n");
    }

    else
    {
        printf("\nThis Number Is Not A Prime Number\n");
    }

    return 0;
}
