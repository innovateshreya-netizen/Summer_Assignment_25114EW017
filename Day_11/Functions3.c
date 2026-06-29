//Write a program to Write function to check prime.

#include <stdio.h>

void Prime(int n)
{
    int prime = 1;
    if( n==1)
    {
        prime=0;
    }
    for(int i = 2; i <= n/2; i++)
    {
        if( n%i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not Prime number");
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    Prime(n);
    return 0;
}