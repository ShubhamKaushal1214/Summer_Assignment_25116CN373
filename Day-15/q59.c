// Write a program to Rotate array right. 

#include <stdio.h>
int main()
{
    int n;
    int t;
    int arr[100];
    int a[100];

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Ener the number of turns to rotate array right : ");
    scanf("%d",&t);

    t=t%n;

    for(int j = 0; j < t; j++)
    {
        int temp = arr[n - 1];

        for(int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    printf("Array after right rotation = ");

    for(int i =0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}