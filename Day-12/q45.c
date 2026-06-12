// Write a program to Write function for palindrome. 

#include <stdio.h>

void palindrome(int n);

void palindrome(int n)
{
    int n1;
    int rev = 0;
    int n2 = n;

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
   
}

int main()
{
    int n; 

    printf("Enter the number : ");
    scanf("%d",&n);

    palindrome(n);

    return 0;
}
