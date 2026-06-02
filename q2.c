// Write a program to reverse a number. 

#include <stdio.h>

int main()
{
    int n;
    int n1;
    int rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        n1 = n % 10;         
        rev = rev * 10 + n1;
        n = n/10;        
    }

    printf("Reversed number = %d", rev);

    return 0;
}