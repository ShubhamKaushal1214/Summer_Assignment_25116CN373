// Write a program to Find sum and average of array. 

#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int sumOfArray = 0;    

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the element : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    } 

    for(int i =0; i<n; i++)
    {
        sumOfArray = sumOfArray + arr[i];
    }

    float avg = (float)sumOfArray / n;

    printf("Sum of array = %d\n",sumOfArray);
    printf("Average of array = %.2f",avg);

    return 0;

}
