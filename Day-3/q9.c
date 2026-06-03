// Write a program to Check whether a number is prime.

#include <stdio.h>
int main()
{
    int n;
    int s = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i =1 ; i<=n ; i++)   
    {

        if(n%i==0)
        {
            s=s+i;
        }

    }

    if(s==n+1)
    {
        printf("Entered number is Prime Number");
    }
    else
    {
        printf("Entered number is not Prime Number");
    }

    return 0;
}