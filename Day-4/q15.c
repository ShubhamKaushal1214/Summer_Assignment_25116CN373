// Write a program to Check Armstrong number.

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int n1;
    int n2;
    int n3;
    int count = 0;
    int sum = 0;

    printf("Enter the number : ");
    scanf("%d",&n);

    n1=n;

    while (n!=0)
    {
        n = n/10 ;

        count++ ;

    }

    n2=n1;

    while (n2!=0)
    {
        n3 = n2%10;

        n2 = n2/10;

        sum = sum + (int)round(pow(n3, count));
    }

    if(sum==n1)
    {
        printf("Entered numer is Armstrong Number");
    }
    else
    {
        printf("Entered number is Not Armstrong Number");
    }

    return 0;
}