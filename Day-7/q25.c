// Write a program to Recursive factorial. 

#include <stdio.h>

int factorial(int n);

int factorial(int n){
    if(n==1||n==0)
    {
        return 1;
    }
    else 
    {
        return factorial(n-1)*n;
    }

}
int main()
{
    int a;
    int n1;

    printf("Enter the number : ");
    scanf("%d",&a);

    n1 = factorial(a);

    printf("factorial of a %d = %d",a,n1);

    return 0;


}