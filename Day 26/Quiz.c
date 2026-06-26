#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        score++;
    }

    // Question 2
    printf("\nQ2. Which language is used to develop C programs?\n");
    printf("1. Java\n2. Python\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        score++;
    }

    // Question 3
    printf("\nQ3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        score++;
    }

    // Result
    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/3\n", score);

    if (score == 3) {
        printf("Excellent!\n");
    } else if (score == 2) {
        printf("Good Job!\n");
    } else if (score == 1) {
        printf("Keep Practicing!\n");
    } else {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}