//Write a program to Check whether a number is palindrome. 

#include <stdio.h>

int main() {
    int n, t, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;

    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(reverse == t){
        printf("palindrome number");
    }
    

    else{
        printf("not a palindrome number");
    }
    

    return 0;
}