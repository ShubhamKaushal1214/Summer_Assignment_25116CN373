// Write a program to Check perfect number.

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i =1 ; i<n ; i++)
    {
       if(n%i==0)
       {
            sum = sum + i;
       }
    }

    if(sum==n)
    {
        printf("Entered number is perfect number ");
    }
    else
    {
        printf("Enterde number is NOT perfect number");
    }

    return 0;
   
}