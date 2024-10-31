#include <stdio.h>
#include <stdlib.h>


struct point
{
    int x;
    int y;
};


int main()
{
    struct point p1;

    printf("Please, Enter X Value = ");
    scanf("%d", &p1.x);

    printf("Please, Enter Y Value = ");
    scanf("%d", &p1.y);

    printf("\nYour Point Is (%d,%d)\n", p1.x, p1.y);

    return 0;
}
