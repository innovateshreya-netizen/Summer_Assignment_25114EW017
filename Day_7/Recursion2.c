//Write a program to Recursive Fibonacci.

#include <stdio.h>

int fibonacci(int n)
{
    if ( n==1 )
    {
        return 0;
    }

    if ( n==2 )
    {
        return 1;
    }
    
    return fibonacci( n-1 ) + fibonacci( n-2 );
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("fibonacci series: ");

    for( int i=1 ; i<=n ; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}