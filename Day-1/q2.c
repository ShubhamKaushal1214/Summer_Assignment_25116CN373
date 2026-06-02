// Write a program to Print multiplication table of a given number.

#include <stdio.h>
int main()
{
    int n;
    int fact;

    printf("enter the number :");
    scanf("%d",&n);

    printf(" multiplication table of %d\n",n);

    for(int i=1;i<=10;i++)
    {   

        fact = n * i;

        printf("%d\n",fact);
       

    }

    

    return 0;
}