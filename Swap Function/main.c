#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y);


int main()
{
    int num1;
    int num2;

    printf("Please, Enter Your First Number = ");
    scanf("%d", &num1);

    printf("\nPlease, Enter Your Second Number = ");
    scanf("%d", &num2);

    printf("\nYour Numbers Before Swapping = (%d, %d)\n", num1, num2);

    // pass by address
    swap(&num1, &num2);

    printf("\nYour Numbers After Swapping = (%d, %d)\n", num1, num2);

    return 0;
}

// in case of return more than 1 values --> no option in this in c
// we can do it using --> structures or dealing with address
// in this case we will not print or return any thing

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}
