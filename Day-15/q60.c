// Write a program to Move zeroes to end. 

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

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]!=0)
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }    
            }    
        }
    }

    printf("The array after moving zeroes to end = ");

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}    