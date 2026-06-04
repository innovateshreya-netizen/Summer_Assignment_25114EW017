//Write a program to Find nth Fibonacci term.

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Nth Fibonacci term = %d", a);
    }
    else if (n == 2) {
        printf("Nth Fibonacci term = %d", b);
    }
    else {
        for (i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Nth Fibonacci term = %d", b);
    }

    return 0;
}