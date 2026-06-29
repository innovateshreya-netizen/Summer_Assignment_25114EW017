//Write a program to Find string length without strlen().

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s",&str);

    for(int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of string = %d", length);

    return 0;
}