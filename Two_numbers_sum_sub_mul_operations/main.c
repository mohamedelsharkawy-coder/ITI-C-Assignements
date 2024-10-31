#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num_1, num_2, sum, sub, mul;

    printf("Please, Enter Your First Number = ");
    scanf("%f",&num_1);

    printf("Please, Enter Your Second Number = ");
    scanf("%f",&num_2);

    // operations
    printf("\n -------------- Some Operations On The 2 Numbers --------------- \n");

    // Summation
    sum = num_1 + num_2;
    printf("\nThe Summation of the two numbers = %f \n", sum);

    // Subtraction
    sub = num_1 - num_2;
    printf("The Subtraction of the two numbers = %f \n", sub);

    // Multiplication
    mul = num_1 * num_2;
    printf("The Multiplication of the two numbers = %f \n", mul);

    return 0;
}
