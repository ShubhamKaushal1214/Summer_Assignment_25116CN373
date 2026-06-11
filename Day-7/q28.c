// Write a program to Recursive reverse number.

#include <stdio.h>

int rev = 0;

int reverse(int a);

int reverse(int a)
{   
    if (a == 0)
    {
        return rev;
    }
    else
    {
        rev = rev * 10 + a % 10;

        return reverse(a / 10);
    }    
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    int r = reverse(n);

    printf("Reverse of a number : %d",r);

    return 0;
}