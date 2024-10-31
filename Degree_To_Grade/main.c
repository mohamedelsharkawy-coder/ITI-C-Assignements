#include <stdio.h>
#include <stdlib.h>

int main()
{
    float degree;
    float max_degree = 100.0;
    float min_degree = 0.0;

    printf("Please, Enter Your Degree = ");
    scanf("%f", &degree);

    if (degree > max_degree || degree < min_degree)
    {
        printf("Student Degree Must Be From 0 to 100, Please Check Your Input");
    }
    else
    {
        if (degree >= 85.0)
        {
            printf("Your Grade is Excellent");
        }

        else if (degree >= 75.0)
        {
            printf("Your Grade is Very Good");
        }

        else if (degree >= 65.0)
        {
            printf("Your Grade is Good");
        }

        else if (degree >= 60.0)
        {
            printf("Your Grade is Accept");
        }

        else
        {
            printf("Your Grade is Fail");
        }
    }
    return 0;
}
