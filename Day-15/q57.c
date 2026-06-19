// Write a program to Reverse array.

#include <stdio.h>
int main()
{
    int n;
    int arr[100];

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("Reverse array = ");

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}