#include <stdio.h>
#include <stdlib.h>
# define row 3
# define col 4

int main()
{
    // define 2d array -> store degree of 3 students each has 4 subjects
    float student_degrees[row][col];

    // for summation process
    // sum for each row
    float sum[row];
    float current_sum;

    // loop to get the data from the user
    int i, j;

    // outer loop for rows
    for(i=0; i<row; i++)
    {
        current_sum = 0;
        for(j=0; j<col; j++)
        {
            printf("Please, Enter Degree No.%i For Student No.%i = ", j+1, i+1);
            scanf("%f", &student_degrees[i][j]);
            current_sum += student_degrees[i][j];
        }
        sum[i] = current_sum;
        printf("\n");
    }

    // print the values of the degrees
    printf("\n ---------------------- The Students Degrees --------------------------\n\n");
    for(i=0; i<row; i++)
    {
        printf("Student No.%i Has This Degrees = \t", i+1);
        for(j=0; j<col; j++)
        {
            printf("%f\t", student_degrees[i][j]);
        }
        printf("\n");
    }

   // summation for each student
   printf("\n ---------------------- The Total Degrees For Each Student ----------------\n\n");

   for(i=0;i<3;i++)
   {
        printf("The Total Degree For Student No.%i = %f\t\n", i+1, sum[i]);
   }



    return 0;
}
