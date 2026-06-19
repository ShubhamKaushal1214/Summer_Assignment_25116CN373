// Write a program to Merge arrays.

#include <stdio.h>
int main()
{
    int n1,n2;
    int arr1[100],arr2[100];
    int arr[100];

    printf("Enter the number of elements in first array : ");
    scanf("%d",&n1);

    printf("Enter the elements of first array : ");

    for(int i =0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter the number of elements in second array : ");
    scanf("%d",&n2);

    printf("Enter the elements of second array : ");

    for(int i =0; i<n2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int size=n1+n2;

    for(int i=0; i<n1; i++)
    {
        arr[i]=arr1[i];
    }
    
    int j=0;
    for(int i=n1; i<size; i++)
    {
        arr[i]=arr2[j];
        j++;
    }

    printf("After merging array = ");

    for(int i =0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}