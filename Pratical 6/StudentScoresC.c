/* StudentScoresC.c
   Practical 6, Part 1 (c)
   Basic array operations - finding max and min scores
   @author Abiral */

#include <stdio.h>

#define NUM_STUDENTS 5

int main() {
    int scores[NUM_STUDENTS];
    int sum = 0;
    double average;

    // Input scores
    printf("Enter %d student scores:\n", NUM_STUDENTS);

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Calculate sum
    for (int i = 0; i < NUM_STUDENTS; i++) {
        sum += scores[i];
    }

    // Calculate average
    average = (double)sum / NUM_STUDENTS;

    // Find maximum and minimum
    int max = scores[0];   // assume first is max
    int min = scores[0];   // assume first is min

    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
    }

    // Output results
    printf("\nSum: %d\n", sum);
    printf("Average: %.2lf\n", average);
    printf("Highest Score: %d\n", max);
    printf("Lowest Score: %d\n", min);

    return 0;
}