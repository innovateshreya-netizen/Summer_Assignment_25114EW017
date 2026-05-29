//Write a program to Calculate sum of first N natural numbers. 


#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum = %d", sum);

    return 0;
}