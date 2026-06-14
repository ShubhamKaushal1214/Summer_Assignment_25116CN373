// Write a program to Frequency of an element.

#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int target;
    int frequency =0;    

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the element : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the element whose frequency you want to find : ");
    scanf("%d",&target);

    for(int i =0; i<n; i++)
    {
        if(arr[i]==target)
        {
            frequency++;
        }
    }

    printf("frequency of %d in the array is %d\n",target,frequency);

    return 0;

}
