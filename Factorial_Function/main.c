#include <stdio.h>
#include <stdlib.h>
int fact(int n);

int main()
{
    int num;
    int res;

    printf("Please, Enter Your Number = ");
    scanf("%d", &num);

    // calling function
    res = fact(num);

    if(res == -1)
    {
        printf("\nFactorial Only Assigned to Positive Values\n");
    }

    else
    {
        printf("\nThe Factorial = %d\n", res);
    }

    return 0;
}

// function to get factorial
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    else if(n<0)
    {
        return -1;
    }

    else
    {
        int i;
        int res=1;
        for(i=1;i<=n;i++)
        {
            res *= i;
        }
        return res;
    }
}
