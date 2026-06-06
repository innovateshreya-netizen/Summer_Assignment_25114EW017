//Write a program to Convert decimal to binary.

#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    int temp = n;

    while (n > 0) {
        binary[i] = n % 2;   // Store remainder
        n = n / 2;           // Update number
        i++;
    }

    printf("Binary of %d is: ", temp);

    // Print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}