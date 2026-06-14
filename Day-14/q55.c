// Write a program to Second largest element. 

#include <stdio.h>
int main()
{
    int n;
    int arr[100]; 
    int count =0;  

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the element : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    int firstMax =arr[0];
    int secondMax =arr[0];

    for(int i =0; i<n; i++)
    {
        if(arr[i]>firstMax)
        {
            firstMax =arr[i];
        }
    }

    int found=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=firstMax)
        {
           if(arr[i]>secondMax)
           {
              secondMax=arr[i];
              found=1;
           }
        }

    }

    if(found)
    printf("Second largest element of array is %d",secondMax);

    

    return 0;

}

