//Write a program to Check palindrome string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], copy[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse the string
    for(int i = 0; i < len; i++) {
        copy[i] = str[len - 1 - i];
    }

    copy[len] = '\0';

    if(strcmp(str, copy) == 0) {
        printf("Palindrome String");
    }
    else {
        printf("Not Palindrome String");
    }

    return 0;
}