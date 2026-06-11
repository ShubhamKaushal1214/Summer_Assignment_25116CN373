// Write a program to Print repeated character pattern.

#include <stdio.h>
int main()
{
    int n;
    int ch ='A';

    printf("Enter the number of lines : ");
    scanf("%d",&n);

    for(int i =1; i<=n ; i++)
    {
        for(int j =0; j<i ; j++)
        {
            printf("%c",ch);
        }
        ch++;

        printf("\n");    
    }

    return 0;
}