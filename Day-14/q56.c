// Write a program to Find duplicates in array.

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

    for(int i =0; i<n; i++)
    {
        int found =0;

        for(int k =0; k<i; k++)
        {
            if(arr[i]==arr[k])
            {
                found=1;
                break;
            }
        }    

        if(found)
        {
            continue;
        }

        int frequency = 0;

        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                frequency++;
            }         
        }
        if(frequency>=2)
        {
            printf("Duplicate element is %d\n",arr[i]);
        }    
    }

    return 0;

}
