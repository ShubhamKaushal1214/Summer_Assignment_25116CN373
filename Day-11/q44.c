// Write a program to Write function to find factorial. 

#include <stdio.h>

int factorial(int n);

int factorial(int n)
{
    int fact = 1;

    for (int i =1 ; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    int f = factorial(n);

    printf("Factorial of a %d = %d",n,f);

    return 0;
}
