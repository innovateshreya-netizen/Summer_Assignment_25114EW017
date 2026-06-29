//Write a program to Recursive sum of digits.

#include <stdio.h>

int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return ( n%10 )+ Sum( n/10 );
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum = %d", Sum(n));

    return 0;
}