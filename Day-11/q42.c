// Write a program to Write function to find maximum.

#include <stdio.h>

int max(int a,int b);

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a;
    int b;

    printf("Enter the first numbers : ");
    scanf("%d",&a);

    printf("Enter the second numbers : ");
    scanf("%d",&b);

    int m = max(a,b);

    printf("Maximum number is %d ",m);
    
    return 0;

}
 