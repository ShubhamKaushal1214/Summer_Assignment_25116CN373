// Write a program to Count digits in a number.

#include<stdio.h>
int main()
{
  int n;
  int count=0;

  printf("enter the number: ");
  scanf("%d",&n);

  while(n!=0)
  {
    n=n/10;
    count++;

  }

  printf("digits of a number:%d",count);

  return 0;
}