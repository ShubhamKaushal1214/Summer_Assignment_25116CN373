// Write a program to Write function for perfect number. 

#include <stdio.h>

int perfect(int n);

int perfect(int n)
{
    int sum =0;
    for(int i =1; i<n; i++)
    {
        if(n%i==0)
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    if(perfect(n)==n)
    {
        printf("Entered number is perfect number");
    }
    else
    {
        printf("Entered number is not perfect number");
    }

    return 0;
}
