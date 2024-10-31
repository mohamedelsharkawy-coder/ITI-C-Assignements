#include <stdio.h>
#include <stdlib.h>


struct complex_number
{
    int real_part;
    int imaginary_part;
};


int main()
{
    struct complex_number complex_1;


    printf("Please, Enter Your Real Part = ");
    scanf("%d", &complex_1.real_part);

    printf("Please, Enter Your Imaginary Part = ");
    scanf("%d", &complex_1.imaginary_part);

    printf("\nYour Complex Number Is = %d + %d i\n", complex_1.real_part, complex_1.imaginary_part);

    return 0;
}
