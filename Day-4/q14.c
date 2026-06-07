// Write a program to Find nth Fibonacci term.

#include <stdio.h>
int main()
{

    int n;
    int a = 0;
    int b = 1;
    int c;
    
    printf("Enter the terms number : ");
    scanf("%d",&n);

    if (n == 1)
    {
        printf("The 1st Fibonacci term is: %d", a);
    }
    else if (n == 2)
    {
        printf("The 2nd Fibonacci term is: %d", b);
    }
    else
    {

        for(int i =3; i<=n ; i++)
        {
           c= a+b;
           a = b;
           b = c;

        }

        printf(" The %dth term of fibonacci series is : %d",n,c);


    }   

    return 0;
}
