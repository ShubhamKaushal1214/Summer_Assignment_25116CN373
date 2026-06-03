// Write a program to Print prime numbers in a range.

#include <stdio.h>
int main()
{
    int n1;
    int n2;
   
    printf("Enter the starting number : ");
    scanf("%d",&n1);

    printf("Enter the ending number : ");
    scanf("%d",&n2);

    printf("The Prime Number between %d and %d is : ",n1,n2);

    for(int i =n1 ; i<=n2 ; i++)
    {
        int s = 0;

        for( int j = 1; j<=i ; j++)
        {
            if(i%j==0)
            {
                 s=s+j;
            }
        }
        if(s==i+1)
        {
            printf("%d ",i);
        }
    }
       
    return 0;

}