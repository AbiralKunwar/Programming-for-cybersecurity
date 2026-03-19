/* StudentScoresSearch.c
   Practical 6, Part 2 (b)
   Search operations in arrays
   @author Abiral */

#include <stdio.h>

#define NUM_STUDENTS 5

// Search function
int linearSearch(int scores[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (scores[i] == target) {
            return i;   // return index
        }
    }
    return -1;   // not found
}

int main() {
    int scores[NUM_STUDENTS];

    // Input scores
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    int search;
    printf("Enter value to search: ");
    scanf("%d", &search);

    int result = linearSearch(scores, NUM_STUDENTS, search);

    if (result != -1) {
        printf("Found at position %d\n", result + 1);
    } else {
        printf("Not found\n");
    }

    return 0;
}