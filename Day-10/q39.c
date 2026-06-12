// Write a program to Print number pyramid.

#include <stdio.h>
int main()
{
    int n;

    printf("Enter the numer of lines : ");
    scanf("%d",&n);

    for(int i =1 ; i<=n ; i++)
    {
        for(int j =1 ; j<=n-i ; j++)
        {
            printf(" ");
        }

        for(int k = 1; k<=i; k++)
        {
           printf("%d",k);           
        }

        for(int k =i; k>1; k--)
        {
            printf("%d",k-1);
        }
        
        printf("\n");
    }

    return 0;
}