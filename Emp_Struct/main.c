#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp
{
    int id;
    char name[30];
    int age;
};


int main()
{
    struct emp e1;

    printf("Please, Enter Your ID = ");
    scanf("%d", &e1.id);

    printf("Please, Enter Your Name = ");
    scanf("%s", e1.name);

    printf("Please, Enter Your Age = ");
    scanf("%d", &e1.age);

    printf("\nWelcome %s, Your ID Is = %d And Your Age Is = %d\n", e1.name, e1.id, e1.age);

    return 0;
}
