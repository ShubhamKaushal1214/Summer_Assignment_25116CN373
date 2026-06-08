// Write a program to Convert binary to decimal.

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int n1;
    int sum = 0;
    int i = 0;

    printf("Enter the binary number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        n1 = n%10;

        sum = sum + (n1 * pow(2,i));

        n =n/10;

        i++;
    }

    printf("The decimal number is : %d",sum);

    return 0;
}