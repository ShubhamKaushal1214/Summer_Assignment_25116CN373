// Write a program to Recursive Fibonacci. 

#include <stdio.h>

int fibonacci(int a);

int fibonacci(int a)
{
    if(a==1)
    {
        return 0;
    }
    else if(a == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(a-1)+fibonacci(a-2);
    }

}
int main()
{
    int n;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    int f = fibonacci(n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }


    return 0;
}
