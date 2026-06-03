// Write a program to Find GCD of two numbers.

#include <stdio.h>
int main()
{
   int n1;
   int n2;
   int gcd;

   printf("Enter first number : ");
   scanf("%d",&n1);

   printf("Enter second number : ");
   scanf("%d",&n2);


   for(int i =1 ; i<=n1 && i<=n2 ; i++)
   {
      if(n1%i==0 && n2%i==0)
      {
          gcd = i;

      }
   }

   printf("gcd of a %d and %d is : %d ",n1,n2,gcd);

   return 0;

}