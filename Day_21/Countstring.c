//Write a program to Count vowels and consonants.

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s",&str);
    
    int vowCount = 0 , consoCount = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u'){
            vowCount++;
        }
        else{
            consoCount++;
        }
    }
    printf("Vowel Count %d ",vowCount);
    printf("\nConsonent Count %d ",consoCount);

    return 0;
}