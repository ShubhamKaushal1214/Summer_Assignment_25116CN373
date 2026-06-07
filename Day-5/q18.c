// Write a program to Check strong number.

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    int n1 = n;

    while(n!=0)
    {
        int fact = 1;
        int temp = n%10 ;

        n = n/10 ;

        for(int i =1 ; i<=temp ; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

    }

    if(sum==n1)
    {
        printf("Enterd number is strong number");
    }
    else
    {
        printf("Entered number is NOT strong number");
    }

    return 0;
}