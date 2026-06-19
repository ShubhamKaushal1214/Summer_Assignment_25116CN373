// Write a program to Find missing number in array.

#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int actualSum =0;
    int expectedSum;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Missing number is : ");

    for(int i=0; i<n; i++)
    {
        actualSum += arr[i];
    }

    expectedSum = (n+1) * (n + 2) / 2;

    if(actualSum!=expectedSum)
    {
        printf("%d ",expectedSum-actualSum);
    }

    return 0;
}    

