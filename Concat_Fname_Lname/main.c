#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // define and get the first name
    char first_name[15] = "";
    printf("Please, Enter Your First Name : ");
    scanf("%s", first_name);

    // define and get the first name
    char last_name[15] = "";
    printf("\nPlease, Enter Your Last Name : ");
    scanf("%s", last_name);

    // first and last names concatenation
    char final_name[30] = "";
    strcpy(final_name, first_name);

    strcat(final_name, " ");
    strcat(final_name, last_name);
    printf("\nWelcome %s, Your Full Name Is %s\n", first_name, final_name);

    return 0;
}
