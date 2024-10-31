#include <stdio.h>
#include <stdlib.h>
void scan_array(int arr[], int size);
void print_array(int arr[], int size);
int sum_array(int arr[], int size);

int main()
{

    int arr[3];
    scan_array(arr, 3);
    print_array(arr, 3);

    int sum;
    sum = sum_array(arr, 3);
    printf("\nThe Summation Of The Array = %d\n", sum);

    return 0;
}


// function to input arrays into arrays
void scan_array(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter NO.%d = ", i+1);
        scanf("%d", &arr[i]);
    }

}

// function to print the elements of the array
void print_array(int arr[], int size)
{
    int i;
    printf("\nYour Array is = { ");
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");

}

// function to get the summation of the array
int sum_array(int arr[], int size)
{
    int sum = 0;
    int i;
    for(i=0;i<size;i++)
    {
        sum += arr[i];
    }

    return sum;
}

