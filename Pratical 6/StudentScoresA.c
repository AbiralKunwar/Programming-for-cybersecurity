/* StudentScoresA.c
   Practical 6, Part 1 (a)
   Basic array operations - calculating average score
   @author Abiral */

#include <stdio.h>
int main() {
    // Declare an array to hold the scores of 5 students
    int scores[5];
    int sum=0;
    double average;

    // Input scores for 5 students
    printf("Enter the scores of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    } 
    // Calculate the average score
    average = (double)sum / 5;

    printf("\nSum: %d\n", sum);
    printf("Average score: %.2f\n", average);

    return 0;




}