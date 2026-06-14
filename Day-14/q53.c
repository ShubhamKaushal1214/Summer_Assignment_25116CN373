// Write a program to Linear search.

#include <stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    int arr[100];
    int target;  
    bool isFound = false; 

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the element : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element which has to be found in array : ");
    scanf("%d",&target);

    for(int i =0; i<n; i++)
    {
        if(arr[i]==target)
        {
            printf("Element is found at position %d ",i+1);
            isFound=true;
            break;
        }
    }

    if(!isFound)
    {
        printf("Element is not found ");
    }

    return 0;

}


