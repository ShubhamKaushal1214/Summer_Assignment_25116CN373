// Write a program to Recursive sum of digits. 

#include <stdio.h>

int sumOfDigits(int a);

int sumOfDigits(int a)
{
    if (a==0)
    {
        return 0;
    }
    else
    {
        return a%10 + sumOfDigits(a/10);
    }
}
int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    int s = sumOfDigits(n);

    printf("Sum of digits of a number is %d",s);

    return 0;
}