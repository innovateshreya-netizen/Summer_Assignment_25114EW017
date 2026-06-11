//Write a program to Write function to find maximum.

#include <stdio.h>

int Max(int a , int b)
{
    if( a>b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int a , b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Maximum number: %d",Max(a,b));
    return 0;
}