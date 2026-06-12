// Write a program to Write function to check prime. 

#include <stdio.h>
#include <stdbool.h>

void prime(int a);

void prime(int a)
{
    bool p=true;

    if(a<=1)
    {
        printf("Number is not prime");
    }
    else
    {
       for(int i = 2; i<=a-1 ; i++)
       {
          if(a%i==0)
          {

            p = false;
            break; 
          }
          
       }
       
       if(p)
       {
        printf("Number is prime");
       }
       else
       {
        printf("Number is not prime");
       }
          
    }
 
}

int main()
{
    int a;
    
    printf("Enter the first numbers : ");
    scanf("%d",&a);

    prime(a);

    return 0;

}
 
