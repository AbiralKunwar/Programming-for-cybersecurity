#include <stdio.h>

#define NUM_STUDENTS 5

// Swap function - swaps two values using pointers
void swap(int *a, int *b) {
    int temp = *a;   // store first value temporarily
    *a = *b;         // assign second value to first
    *b = temp;       // assign temp to second
}

// Bubble sort function - sorts array in ascending order
void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if in wrong order
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int scores[NUM_STUDENTS];

    // Input with user-friendly prompts
    printf("Enter %d student scores:\n", NUM_STUDENTS);

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Score %d: ", i + 1);   // shows Score 1, 2, 3...
        scanf("%d", &scores[i]);      // store input in array
    }

    // Sort the scores
    sort(scores, NUM_STUDENTS);

    // Display sorted scores
    printf("\nSorted Scores (Ascending):\n");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", scores[i]);
    }

    return 0;
}
