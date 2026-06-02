// Write a program to Check whether a number is palindrome.

#include <stdio.h>
int main()
{
    int n;
    int n1;
    int n2;
    int rev = 0;

    printf("enter the number : ");
    scanf("%d",&n);

    n2 = n;

    while(n!=0)
    {
        n1 = n%10;

        rev = rev * 10 +n1;

        n = n/10;

    }

    if(n2==rev)
    {
        printf("Entered number is palindrome");
    }

    else
    {
        printf("Entered number is not palindrome");
    }

    return 0;
}


