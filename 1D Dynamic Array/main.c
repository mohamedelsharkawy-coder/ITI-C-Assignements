#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("Please, Enter Your Size Array = ");
    scanf("%d", &size);

    int *dynamic_array = (int*) malloc(size * sizeof(int));

    // check if there is free places in the heap
    if(dynamic_array == NULL)
    {
        printf("\nThere is no available consuctive places in the heap");
    }

    else
    {
        // get input from the user
        int i;
        for(i=0;i<size;i++)
        {
            printf("\nPlease, Enter Element NO.%d = ", i+1);
            scanf("%d", dynamic_array+i);
        }

        // display the user data
        printf("\nYour Array = [ ");
        for(i=0;i<size;i++)
        {
            printf("%d ", *(dynamic_array+i));
        }
        printf("]\n");

        free(dynamic_array);

    }


    return 0;
}
