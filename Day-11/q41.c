// Write a program to Write function to find sum of two numbers.

#include <stdio.h>

int sum(int a, int b);

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a;
    int b;

    printf("Enter the first numbers : ");
    scanf("%d",&a);

    printf("Enter the second numbers : ");
    scanf("%d",&b);

    int s = sum(a,b);

    printf("Sum of the number = %d",s);

    return 0;
}
