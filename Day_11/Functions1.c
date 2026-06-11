//Write a program to Write function to find sum of two numbers.

#include <stdio.h>

int Sum(int a , int b)
{
    int c = a+b;
    return c;
}

int main()
{
    int a , b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Sum of two numbers: %d",Sum(a,b));
    return 0;
}