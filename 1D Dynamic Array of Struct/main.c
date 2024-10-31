#include <stdio.h>
#include <stdlib.h>


struct emp
{
    int id;
    char name[30];
    int age;
};


int main()
{
    int no_of_structs;
    printf("Please, Enter number of employees = ");
    scanf("%d", &no_of_structs);

    struct emp *dynamic_array = (struct emp*) malloc(no_of_structs * sizeof(struct emp));

    if(dynamic_array == NULL)
    {
        printf("\nThere is no available spaces in the heap\n");
    }

    else
    {
        // read data
        int i;
        for(i=0; i<no_of_structs; i++)
        {
            printf("\n----------------------------- Enter Data For The Employee NO.%d --------------------------\n", i+1);

            printf("\nEnter Employee ID = ");
            scanf("%d", &(dynamic_array[i].id));


            printf("\nEnter Employee Name = ");
            scanf("%s", dynamic_array[i].name);

            printf("\nEnter Employee Age = ");
            scanf("%d", &(dynamic_array[i].age));
        }
        // display data

        for(i=0;i<no_of_structs;i++)
        {
            printf("\n----------------------------- Display Data For The Employee NO.%d --------------------------\n", i+1);

            printf("\nEmployee ID = %d\n", dynamic_array[i].id);

            printf("\nEmployee Name = %s\n", dynamic_array[i].name);

            printf("\nEmployee Age = %d\n", dynamic_array[i].age);

        }
        free(dynamic_array);
    }


    return 0;
}
