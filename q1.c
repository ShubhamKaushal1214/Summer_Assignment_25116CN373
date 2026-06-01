// Write a program to Calculate sum of first N natural numbers.

#include<stdio.h>
int main()
{
    int n;
    int sum = 0;

    printf("enter the number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("enter the sum of numbers:%d",sum);

    return 0;

}