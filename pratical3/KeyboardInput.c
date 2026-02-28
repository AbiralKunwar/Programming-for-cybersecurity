#include <stdio.h>

int main() {
    // Declare a variable to store the input character

    char first_word[20]; // Array to store the first word (up to 19 characters + null terminator)
    char second_word[20]; // Array to store the second word (up to 19
    int number; // Variable to store the input number

    // Prompt the user for input
    printf("Enter two words and a number (e.g., Hello World 42): ");

    // take input limited to 19 characters for each word and an integer
    if (scanf("%19s %19s %d", first_word, second_word, &number) != 3) {
        printf("Invalid input. Please enter two words followed by a number.\n");
        return 1; // Exit with an error code

    }

    printf("\nYou entered: \n");
    printf("%s %s\n%d\n", first_word, second_word, number);

    return 0; // Exit with success

}