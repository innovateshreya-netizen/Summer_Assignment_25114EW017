//Write a program to Create number guessing game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));      // Seed the random number generator

    int guess = rand() % 100 + 1;
    int num;
    int count = 0;

    printf("Guess a number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &num);

        count++;

        if (num < guess) {
            printf("Too low!\n");
        }
        else if (num > guess) {
            printf("Too high!\n");
        }
        else {
            printf("You Win! You guessed it in %d chances.\n", count);
        }

    } while (num != guess);

    return 0;
}