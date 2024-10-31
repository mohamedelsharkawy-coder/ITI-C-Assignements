#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    float n2;
    char op;

    printf("Please, Enter Your First Number = ");
    scanf("%f", &n1);

    printf("\nPlease, Enter Your Second Number = ");
    scanf("%f", &n2);

    _flushall();
    printf("\nPlease, Enter Your Operation From These [+, -, *, /] = ");
    scanf("%c", &op);

    switch(op)
    {
    case '+':
        printf("\nThe Summation = %f\n", n1 + n2);
        break;
    case '-':
        printf("\nThe Subtraction = %f\n", n1 - n2);
        break;
    case '*':
        printf("\nThe Multiplication = %f\n", n1 * n2);
        break;
    case '/':
        printf("\nThe Division = %f\n", n1 / n2);
        break;
    default:
        printf("\nPlease, Enter one of this Operations [+, -, *, /]\n");
        break;
    };

    return 0;
}
