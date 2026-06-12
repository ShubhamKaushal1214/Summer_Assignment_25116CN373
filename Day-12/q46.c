// Write a program to Write function for Armstrong.

#include <stdio.h>
#include <math.h>

int armstrong(int n);

int armstrong(int n)
{
    int count =0;
    int n1=n;
    double sum=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    while(n1!=0)
    {
        int n2=n1%10;
        sum = sum + pow(n2,count);
        n1=n1/10;
    }
    return sum;
}

int main()
{
   
    int n; 

    printf("Enter the number : ");
    scanf("%d",&n);

    if(armstrong(n)==n)
    {
        printf("Entered number is armstrong number");
    }
    else
    {
        printf("Entered number is not armstrong number");
    }

    return 0;
}



