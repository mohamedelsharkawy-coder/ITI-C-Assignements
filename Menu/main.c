#include <stdio.h>
#include <stdlib.h>

int main()
{
    char user_input;
    do
    {
        system("cls");
        printf(" ----------------------- Please, Select One Of These Items --------------------------- \n");
        printf("n:New\nd:Display\ne:Exit\n");
        printf("\nYour Selection = ");
        _flushall();
        scanf("%c", &user_input);
        if (user_input == 'n')
        {
            printf("\nNew Item Is Selected\n");
            printf("\nPress Any Key To Continue\n");
            getch();
        }

        else if (user_input == 'd')
        {
            printf("\nDisplay Item Is Selected\n");
            printf("\nPress Any Key To Continue\n");
            getch();
        }

        else
        {
            if (user_input == 'e')
            {
                break;
            }

            else
            {
                printf("\nPlease Choose One Of These [n, d, e]\n");
                printf("\nPress Any Key To Continue\n");
                getch();
            }

        }


    }while(user_input != 'e');

    return 0;
}
