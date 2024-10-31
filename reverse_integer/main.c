#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    //int r;
    printf("Please, Enter Your Number = ");
    scanf("%i", &num);

    int i;
    while(num != 0)
    {
        i = num % 10;
        printf("%i", i);
        num = num/10;
    }

    return 0;
}
