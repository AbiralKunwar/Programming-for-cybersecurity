#include <stdio.h>

int main() {

    int number, sum = 0, count = 0;

    printf("Enter positive numbers (negative to stop):\n");

    while (1) {

        printf("Enter number: ");

        if (scanf("%d", &number) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;
        }

        if (number < 0) // Check for negative number to stop input
            break;

        sum += number;
        count++;

        printf("Current sum: %d\n", sum);
    }

    printf("\nFinal sum: %d\n", sum);
    printf("Total numbers entered: %d\n", count);

    return 0;
}