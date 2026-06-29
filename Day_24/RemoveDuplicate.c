//Write a program to Remove duplicate characters.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0;
    int duplicate;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {

        duplicate = 0;

        // Check if character already exists
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                duplicate = 1;
                break;
            }
        }

        // Copy only unique characters
        if (!duplicate) {
            result[k++] = str[i];
        }
    }

    result[k] = '\0';

    printf("String after removing duplicates: %s", result);

    return 0;
}