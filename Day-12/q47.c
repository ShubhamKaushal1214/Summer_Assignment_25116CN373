// Write a program to Write function for Fibonacci. 

#include <stdio.h>

void fibonacci(int n);

void fibonacci(int n)
{   
    int a =0;
    int b=1;

    for(int i =1; i<=n; i++)
    {
        printf("%d ",a);

        int c= a+b;
        a = b;
        b = c;
    }
   
}


int main()
{
    int n;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    printf("Fibonacci series upto %d terms = ",n);
    fibonacci(n);

    return 0;
}