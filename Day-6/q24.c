// Write a program to Find x^n without pow().

#include <stdio.h>
int main()
{
    int x;
    int n;
    int n1 = 1;

    printf("Enter the number :");
    scanf("%d",&x);

    printf("Enter the power :");
    scanf("%d",&n);

    for(int i =1; i<=n; i++)
    {
        n1 = n1 * x;
    }

    printf("%d ^ %d = %d",x,n,n1);

    return 0;
}
