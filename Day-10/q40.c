// Write a program to Print character pyramid.

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
        char a ='A';

        for(int k = 1; k<=i; k++)
        {
           printf("%c",a);
           a++;           
        }
        
        for(int k =i; k>1; k--)
        {
            printf("%c",a-2);
            a--;            
        }
        
        printf("\n");
    }

    return 0;
}