#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Please, Enter Your Number = ");
    scanf("%i", &num);

    int i;
    int fact = 1;
    for(i=num; i>=1; i--)
    {
        fact *= i;
    }

    printf("\nThe Factorial Of %i = %i\n", num, fact);

    return 0;
}
