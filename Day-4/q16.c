// Write a program to Print Armstrong numbers in a range.

#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;

    printf("Enter the starting number : ");
    scanf("%d",&a);

    printf("Enter the last number : ");
    scanf("%d",&b);

    printf("The armstrong number between %d and %d is : ",a,b);

    for(int i = a ; i<=b ; i++)
    {
        int n = i;
        int n1 = i;
        int count = 0;
        int sum = 0;

        while (n!=0)
        {
           n = n/10 ;

           count++ ;

        }

        int n2=n1;

        while (n2!=0)
        {
           int n3 = n2%10;

           n2 = n2/10;

           sum = sum + (int)round(pow(n3, count));
        }

        if(sum==n1)
        {
           printf("%d ",n1);
        }
        
    }

    return 0;

}
