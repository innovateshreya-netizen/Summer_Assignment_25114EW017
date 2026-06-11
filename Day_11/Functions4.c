//Write a program to Write function to find factorial.

#include <stdio.h>

int factorial(int n)
{ 
    int fact = 1;
    if( n==1 || n==0)
    {
        fact=1;
    }
    for(int i=1 ; i<=n ; i++)
    {
        fact= fact*i;
    }
    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Factorial of a number: %d",factorial(n));
    return 0;
}