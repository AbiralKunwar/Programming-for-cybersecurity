/* StudentScoresModular.c
   Practical 6, Part 2 (a)
   Modular array operations with functions
   @author Abiral */

#include <stdio.h>

#define NUM_STUDENTS 5

// Function declarations
void readScores(int scores[], int size);
int calculateSum(int scores[], int size);
double calculateAverage(int scores[], int size);
int findMaximum(int scores[], int size);
int findMinimum(int scores[], int size);
void displayScores(int scores[], int size);

int main() {
    int scores[NUM_STUDENTS];

    // Read input
    readScores(scores, NUM_STUDENTS);

    // Display scores
    displayScores(scores, NUM_STUDENTS);

    // Display statistics
    printf("\nSum: %d\n", calculateSum(scores, NUM_STUDENTS));
    printf("Average: %.2lf\n", calculateAverage(scores, NUM_STUDENTS));
    printf("Max: %d\n", findMaximum(scores, NUM_STUDENTS));
    printf("Min: %d\n", findMinimum(scores, NUM_STUDENTS));

    return 0;
}

// Read scores from user
void readScores(int scores[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
}

// Calculate sum
int calculateSum(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum;
}

// Calculate average
double calculateAverage(int scores[], int size) {
    return (double)calculateSum(scores, size) / size;
}

// Find maximum
int findMaximum(int scores[], int size) {
    int max = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}

// Find minimum
int findMinimum(int scores[], int size) {
    int min = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    return min;
}

// Display scores
void displayScores(int scores[], int size) {
    printf("\nScores:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");
}