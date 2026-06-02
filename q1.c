// Write a program to Find sum of digits of a number.

#include <stdio.h>
int main()
{
    int n;
    int n1;
    int sum=0;

    printf("enter the number :");
    scanf("%d",&n);

    while(n!=0)
    {
        n1=n%10;

        n=n/10;

        sum=sum+n1;
    }

    printf("sum of digits of a number is : %d",sum);

    return 0;
}