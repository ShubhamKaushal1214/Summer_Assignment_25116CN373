// Write a program to Count set bits in a number.

#include <stdio.h>
int main()
{
    int n;
    int n1;
    int count = 0;
    

    printf("Enter the number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        n1 = n%2;

        if(n1==1)
        {
            count++;
        }

        n = n/2;

    }

    printf("The set bits of a number is : %d",count);

    return 0;
}