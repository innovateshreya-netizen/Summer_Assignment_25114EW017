//Write a program to Convert binary to decimal.

#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, digit, power = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        digit = binary % 10;                  // Get last digit
        decimal += digit * pow(2, power);    // Add value
        power++;                             
        binary /= 10;                         // Remove last digit
    }

    printf("Decimal = %d", decimal);

    return 0;
}