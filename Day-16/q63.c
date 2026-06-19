// Write a program to Find pair with given sum.

#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int s;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the required sum : ");
    scanf("%d",&s);

    printf("The pairs are : ");

    for(int i =0; i<n; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==s)
            {
                printf("(%d,%d) ",arr[i],arr[j]);
            }
        }
    }

    return 0;
}    
