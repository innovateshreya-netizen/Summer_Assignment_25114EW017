//Write a program to Find longest word.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i;
    int start = 0, maxStart = 0;
    int len = 0, maxLen = 0;

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ' && str[i] != '\n') {
            len++;
        } else {

            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }

            len = 0;
            start = i + 1;
        }
    }

    // Check the last word
    if (len > maxLen) {
        maxLen = len;
        maxStart = start;
    }

    printf("Longest word: ");

    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d", maxLen);

    return 0;
}