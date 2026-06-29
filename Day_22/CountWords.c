//Write a program to Count words in a sentence.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if((i == 0 && str[i] != ' ') ||
           (str[i] != ' ' && str[i-1] == ' ')) {
            count++;
        }
    }

    printf("Number of words = %d", count);

    return 0;
}