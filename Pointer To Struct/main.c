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
    struct emp e1;
    struct emp *ptr = &e1;

    // read data by pointers in structure
    printf("Enter Your Name = ");
    scanf("%s", ptr->name);

    printf("\nEnter Your ID = ");
    scanf("%d", &ptr->id);

    printf("\nEnter Your Age = ");
    scanf("%d", &ptr->age);

    // print data
    printf("\n------------------------ Display Data ----------------------------\n");
    printf("\nYour Name is = %s", ptr->name);
    printf("\nYour ID is = %d", ptr->id);
    printf("\nYour Age is = %d\n", ptr->age);
    return 0;
}
