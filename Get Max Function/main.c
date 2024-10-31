#include <stdio.h>
#include <stdlib.h>
float get_max(float num1, float num2);


int main()
{
    float num1;
    float num2;
    float max_num;

    printf("Please, Enter Your First Number = ");
    scanf("%f", &num1);

    printf("\nPlease, Enter Your Second Number = ");
    scanf("%f", &num2);

    max_num = get_max(num1, num2);

    printf("\nThe Maximum Number = %f\n", max_num);


    return 0;
}


float get_max(float num1, float num2)
{
    return num1>num2?num1:num2;
}
