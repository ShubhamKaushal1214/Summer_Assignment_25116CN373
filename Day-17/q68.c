// Write a program to Find common elements.

#include <stdio.h>
int main()
{
    int n1,n2;
    int arr1[100],arr2[100];
    int found=0;

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

    printf("Common elements in array = ");

    for(int i=0; i<n1; i++)
    {
        int duplicate=0;

        for(int k=0; k<i; k++)
        {
            if(arr1[i]==arr1[k])
            {
                duplicate=1;
                break;
            }
        }

        if(duplicate)
        {
            continue;
        }

        for(int j=0; j<n2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ",arr1[i]);
                found=1;
                break;
            }
        }
    }
    if(!found)
    {
        printf("No common elements ");
    }
    return 0;
} 