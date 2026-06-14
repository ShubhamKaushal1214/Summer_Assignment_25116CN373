// Write a program to Input and display array. 

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
    
    printf("Elements in array are : ");

    for(int i =0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}