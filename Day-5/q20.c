// Write a program to Find largest prime factor.

#include <stdio.h>
int main()
{
    int n;
    int largest ;
    int primeFactor;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i =1; i<=n; i++)
    {
        if(n%i==0)
        {
            largest = i;
            int s = 0;

            for(int j =1 ; j<=largest ; j++)   
            {
               if(largest%j==0)
               {
                  s=s+j;
               }

            }
            if(s==largest+1)
            {
                primeFactor = largest;
            }
        }
    }

    printf("The largest prime factors of a number is : %d",primeFactor);

    return 0;
}
