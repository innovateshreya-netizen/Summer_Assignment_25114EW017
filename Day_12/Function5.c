//Write a program to Write function for palindrome.

#include <stdio.h>

void palindrome( int a )
{
    int original = a;
    int reverse = 0;
    while( a != 0) {
        int digit = a % 10;
        reverse = reverse * 10 + digit;
        a = a / 10;
    }

    if(reverse == original){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome number");
    }
}

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    palindrome(a);
    return 0;
}