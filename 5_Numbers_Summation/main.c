#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    float current_value;
    float sum = 0;

    for(i;i<5;i++)
    {
        printf("\nEnter Number %i = ", i+1);
        scanf("%f", &current_value);
        sum += current_value;
    }

    printf("\nThe Summation of Your 5 Numbers = %f\n", sum);
    return 0;
}
