#include <stdio.h>
#include <stdlib.h>

int main()
{
    // define 1d array -> store degree of a student
    float degrees[5];

    // loop to get the data from the user
    int i;
    for(i=0; i<5; i++)
    {
        printf("Please, Enter Degree %d = ", i+1);
        scanf("%f", &degrees[i]);
    }
    // print the values of the degrees
    printf("\nYour Degrees Are = [%f, %f, %f, %f, %f]\n", degrees[0], degrees[1], degrees[2], degrees[3], degrees[4]);

    // get the sum, max, min of these degrees
    float sum;
    float max;
    float min;

    // sum
    sum = 0;
    for (i=0; i<5; i++)
    {
        sum += degrees[i];
    }
    printf("\nThe Sum Of Your Degrees = %f\n", sum);


    // max
    max = degrees[0];
    for (i=1; i<5; i++)
    {
        if(degrees[i]>max)
        {
            max = degrees[i];
        }
    }
    printf("\nThe Max Of Your Degrees = %f\n", max);

    // min
    min = degrees[0];
    for (i=1; i<5; i++)
    {
        if(degrees[i]<min)
        {
            min = degrees[i];
        }
    }
    printf("\nThe Min Of Your Degrees = %f\n", min);

    return 0;
}
