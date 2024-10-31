#include <stdio.h>
#include <stdlib.h>

int main()
{
    // define array
    int arr[5];
    int *arrptr = arr; //&arr[0]

    // read items by pointers
    int i;
    for(i=0;i<5;i++)
    {
        printf("Please, Enter NO.%d = ", i+1);
        scanf("%d", arrptr+i);
    }

    // print items by points
    printf("\nYour Array = [ ");
    for(i=0;i<5;i++)
    {
        printf("%d ", *arrptr + i);
    }
    printf("]\n");

    return 0;
}
