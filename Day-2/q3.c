// Write a program to Find product of digits.

#include <stdio.h>
int main()
{
    int n;
    int n1;
    int product = 1;

    printf("enter the number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        n1 = n%10;

        product = product * n1;

        n = n/10;

    }

    printf("product of a digits of a number : %d",product);

    return 0;

}