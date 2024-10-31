#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month_num;
    printf("Please, Enter Month = ");
    scanf("%i", &month_num);

    if (month_num > 12 || month_num < 1)
    {
        printf("\nPlease, Enter Number From 1 to 12 Represent The Month You Want\n");
    }

    else
    {
        if (month_num == 2)
        {
            printf("\nNumber of Days are 28 or 29, It Depends\n");
        }

        else if (month_num == 1 || month_num == 3 || month_num == 5 || month_num == 7 || month_num == 8 || month_num == 10 || month_num == 12)
        {
            printf("\nNumber of Days are 31\n");
        }
        else
        {
            printf("\nNumber of Days are 30\n");
        }

    }
    return 0;
}
