// Write a program to Find factorial of a number.

#include<stdio.h>
int main()
{
  int n;
  int fact=1;

  printf("enter the number: ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
    fact=fact*i;

  }

  printf("factorial of a number:%d",fact);

  return 0;
}