// Write a program to Second largest element. 

#include <stdio.h>
int main()
{
    int n;
    int arr[100];  

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the element : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i =0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Second largest element of array is %d",arr[n-2]);

    return 0;

}

