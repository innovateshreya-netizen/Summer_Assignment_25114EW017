//Write a program to Sort words by length.

#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][50], temp[50];

    printf("Enter the words:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Bubble Sort based on word length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (strlen(words[j]) > strlen(words[j + 1])) {

                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");

    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}