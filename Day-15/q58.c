// Write a program to Rotate array left.

#include <stdio.h>
int main()
{
    int n;
    int s;
    int arr[100];
    int a[100];

    printf("Enter the number of elements : ");
    scanf("%d",&s);

    printf("Enter the elements : ");

    for(int i =0; i<s; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Ener the number of turns to rotate array left : ");
    scanf("%d",&n);

    n=n%s;
    
    for(int i =0; i<n; i++)
    {
        a[i]= arr[i];
    }
    
    int j=0;

    for(int i = 0; i<s; i++)
    {
        if(n+i<s)
        {
            arr[i]=arr[n+i];
        }
        else
        {
            arr[i]=a[j];
            j++;
        }

    }

    printf("Array after left rotation = ");

    for(int i =0; i<s; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
    
}