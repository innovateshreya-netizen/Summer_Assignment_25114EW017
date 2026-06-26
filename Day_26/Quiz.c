//Write a program to Create quiz application.

#include <stdio.h>

int main() {

    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("1. Which language is used to write C programs?\n");
    printf("1. Python\n");
    printf("2. C\n");
    printf("3. Java\n");
    printf("4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        score++;
    }

    // Question 2
    printf("\n2. Which symbol is used to end a C statement?\n");
    printf("1. :\n");
    printf("2. ,\n");
    printf("3. ;\n");
    printf("4. .\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        score++;
    }

    // Question 3
    printf("\n3. Which function is used to display output in C?\n");
    printf("1. scanf()\n");
    printf("2. printf()\n");
    printf("3. gets()\n");
    printf("4. puts()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        score++;
    }

    // Question 4
    printf("\n4. Which header file is required for printf()?\n");
    printf("1. stdio.h\n");
    printf("2. math.h\n");
    printf("3. string.h\n");
    printf("4. stdlib.h\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1) {
        score++;
    }

    // Question 5
    printf("\n5. How many times does a do-while loop execute at minimum?\n");
    printf("1. 0\n");
    printf("2. 1\n");
    printf("3. 2\n");
    printf("4. Depends on condition\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        score++;
    }

    printf("\n=========================\n");
    printf("Quiz Completed!\n");
    printf("Your Score = %d/5\n", score);

    return 0;
}