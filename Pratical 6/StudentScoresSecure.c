#include <stdio.h>
#include <stdbool.h>

#define NUM_STUDENTS 5
#define MIN_SCORE 0
#define MAX_SCORE 100

// Validate score range
bool validateScore(int score) {
    return (score >= MIN_SCORE && score <= MAX_SCORE);
}

int main() {
    int scores[NUM_STUDENTS];

    // Input with validation
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int valid = 0;

        while (!valid) {
            printf("Score %d: ", i + 1);

            // Check scanf success
            if (scanf("%d", &scores[i]) != 1) {
                printf("Invalid input. Enter number only.\n");

                // clear buffer
                while (getchar() != '\n');
                continue;
            }

            // Check range
            if (!validateScore(scores[i])) {
                printf("Score must be between 0 and 100\n");
                continue;
            }

            valid = 1;   // valid input
        }
    }

    printf("\nValid Scores Entered Successfully\n");

    return 0;
}