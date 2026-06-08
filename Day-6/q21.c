// Write a program to Convert decimal to binary.

#include <stdio.h>
int main()
{
    int n;
    int a[50];
    int i =0;  

    printf("Enter the decimal number : ");
    scanf("%d",&n);

    printf("The binary number of %d is ",n);

    if(n == 0)
    {
        printf("0");
        return 0;
    }

    while(n!=0)
    {
       a[i] = n%2;

       n = n/2;

       i++;       
    }
    
    for(int j =i-1; j>=0 ; j--)
    {
        printf("%d",a[j]);
    }

    return 0;
}