// Write a program to Count even and odd elements. 

#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int even =0; 
    int odd =0;  

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the element : ");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int min =arr[0];

    int max =arr[0];

    for(int i =0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Number of even elements in array is %d\n",even);
    printf("Number of odd elements in array is %d",odd);

    return 0;

}


