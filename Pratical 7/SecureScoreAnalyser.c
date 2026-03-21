#include <stdio.h>
#include <stdbool.h>
#define MAX_ARRAY_SIZE 100 // maximum students allowed

// Validate array parameters
bool validateArrayParams(int *arr, int size) {

    if (arr==NULL) {
        printf("Error: Array is Null\n");
        return false;
    }
    if (size <= 0 || size > MAX_ARRAY_SIZE) {
        printf("Error: Invalid array size\n");
        return false;
    }
    return true;
}
//CALCULATE Sum
bool calculateSum(int *arr, int size, int *result) {
    if (result == NULL) {
        printf("Error: Result sum pointer is NULL\n");
        return false;
    }
    if (!validateArrayParams(arr, size)) {
        return false;
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Pointer arithmetic
    }
    *result = sum;
    return true;
}
//FIND MAX
bool findMax(int *arr, int size, int *maxValue){
    if(maxValue ==NULL) return false;
    if (!validateArrayParams(arr, size))
        return false;
    *maxValue = arr[0]; // Initialize with first element
    for (int i=1; i<size; i++){
        if (arr[i] > *maxValue){
            *maxValue = arr[i];
        }
    }
    return true;
}

// FIND MIN
bool find_min(int *arr, int size, int *minValue){
    if(minValue ==NULL) return false;
    if (!validateArrayParams(arr, size))
        return false;
    *minValue = arr[0]; // Initialize with first element
    for (int i=1; i<size; i++){
        if (arr[i] < *minValue){
            *minValue = arr[i];
        }
    }

    return true;
}

//main function to test
int main(){
    int scores[MAX_ARRAY_SIZE];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // validate input size
    if (n<=0 || n>MAX_ARRAY_SIZE)
    {
        printf("Invalid number of students\n");
        return 0;
    }
    // Input scores
    for(int i = 0; i < n; i++) {

        while(1) {   // infinite loop until correct input

        printf("Enter score %d (0-100): ", i+1);

        // check if input is number
        if(scanf("%d", &scores[i]) != 1) {
            printf("Invalid input! Please enter a number.\n");

            // clear wrong input from buffer
            while(getchar() != '\n');

            continue;   // ask again
        }

        // check range
        if(scores[i] < 0 || scores[i] > 100) {
            printf("Score must be between 0 and 100!\n");
            continue;   // ask again
        }

        break;  // correct input → exit loop
    }
    }
    // Calculate sum, max, and min
    int sum, max, min;
    if (!calculateSum(scores, n, &sum)) return 0;
    if (!findMax(scores, n, &max)) return 0;
    if (!find_min(scores, n, &min)) return 0;

    float average = (float)sum / n;
    // Display results
    printf("\n==============Results======================\n");
    printf("Sum: %d\n", sum);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Average: %.2f\n", average);
    printf("=========Result printed successfully===========\n");


    return 0;

}
