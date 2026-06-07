// Write a program to Generate Fibonacci series.

#include <stdio.h>
int main()
{
    int n;
    int a = 0;
    int b = 1;
    int c;
    
    printf("Enter the number of terms upto which fibonacci series to be write : ");
    scanf("%d",&n);

    if(n>=1)
    {
        printf("%d\n",a);
    }
    
    if(n>=2)
    {
        printf("%d\n",b);
    }

    for(int i =3; i<=n ; i++)
    {
        c= a+b;
        a = b;
        b = c;

        printf("%d\n",c);
    }

    return 0;
}