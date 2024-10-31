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
    struct emp employess[3];

    int i;

    // Read data in the array of structure
    for(i=0;i<3;i++)
    {
        printf("\n---------- Welcome Employee Number %d ----------\n", i+1);
        printf("\nPlease, Enter Your Name = ");
        scanf("%s", employess[i].name);
        printf("\nPlease, Enter Your ID = ");
        scanf("%d", &employess[i].id);
        printf("\nPlease, Enter Your Age = ");
        scanf("%d", &employess[i].age);
    }
    printf("\n------------------------- Print Employees Data -----------------------\n");
    // display data of the array of structure
    for(i=0;i<3;i++)
    {
        printf("\n---------- Data of Employee Number %d ----------\n", i+1);
        printf("\nYour name = %s", employess[i].name);
        printf("\nYour ID = %d", employess[i].id);
        printf("\nYour Age = %d\n", employess[i].age);

    }

    return 0;
}
