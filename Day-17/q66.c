// Write a program to Union of arrays. 

#include <stdio.h>
int main()
{
    int n1,n2;
    int arr1[100],arr2[100],arr3[100];
    int k=0;

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

    printf("Union of arrays are : ");

    for(int i =0; i<n1; i++)
    {
        int isDuplicate=0;
        for(int j=0; j<i; j++)
        {
            if(arr1[i]==arr1[j])
            {
                isDuplicate=1;
                break;
            }    
        } 
        if(isDuplicate==0)
        {
            printf("%d ",arr1[i]);
        }   
    }

    
    for(int i =0; i<n2; i++)
    {
        int isDuplicate=0;
        for(int j=0; j<i; j++)
        {
            if(arr2[i]==arr2[j])
            {
                isDuplicate=1;
                break;
            }    
        } 
        if(isDuplicate==0)
        {
            arr3[k]=arr2[i];
            k++;
        }   
    }

    for(int i =0; i<k; i++)
    {
        int isEqual=0;
        for(int j=0; j<n1; j++)
        {
            if(arr3[i]==arr1[j])
            {
                isEqual=1;
                break;
            }
        }
        if(isEqual==0)
        {
            printf("%d ",arr3[i]);
        }
    }

    return 0;

}