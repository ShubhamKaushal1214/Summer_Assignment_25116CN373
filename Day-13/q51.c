// Write a program to Find largest and smallest element. 

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
    
    int min =arr[0];

    int max =arr[0];

    for(int i =1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max =arr[i];
        }
        if(arr[i]<min)
        {
            min =arr[i];
        }
    }

    printf("Smallest element of array is %d\n",min);
    printf("Largest element of array is %d",max);

    return 0;

}

