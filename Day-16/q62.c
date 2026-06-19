// Write a program to Find maximum frequency element. 

#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int arrayOfFrequency[100];

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        int frequency=0;

        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                frequency++;
            }
        }
        
        arrayOfFrequency[i]=frequency;
    }

    int max=arrayOfFrequency[0];
    int a=0;

    for(int i=0; i<n; i++)
    {
        if(arrayOfFrequency[i]>max)
        {
            max=arrayOfFrequency[i];
            a=i;
        }
    }

    printf("The maximum frequency element is %d",arr[a]);

    return 0;
}
