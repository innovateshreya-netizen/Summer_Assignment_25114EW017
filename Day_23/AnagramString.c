/* Write a program to Check anagram strings.
Two strings are anagrams if they contain the same characters with the same frequency, but the order can be different.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagram");
        return 0;
    }

    for(int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagram Strings");
    else
        printf("Not Anagram");

    return 0;
}