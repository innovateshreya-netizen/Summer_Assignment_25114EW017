//Write a program to Write function for Armstrong

#include <stdio.h>

void armstrong( int a )
{
    int original = a;
    int sum = 0;
    while( a != 0) {
        int digit = a % 10;
        sum = sum + digit * digit * digit;
        a = a / 10;
    }

    if(sum == original){
        printf("Armstrong number");
    }
    else{
        printf("not a Armstrong number");
    }
}

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    armstrong(a);
    return 0;
}