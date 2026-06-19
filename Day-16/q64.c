// Write a program to Remove duplicates from array. 

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

    printf("array after removing duplicates : ");

    for(int i=0; i<n; i++)
    {
        int duplicate =0;

        for(int j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                duplicate=1;
                break;
            }
        }

        if(duplicate==0)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}    