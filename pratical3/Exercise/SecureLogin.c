#include <stdio.h>
#define MAX_ATTEMPTS 3 // Define maximum number of attempts
#define CORRECT_PIN 2026 // Define the correct PIN (for demonstration purposes)

int main (){
    int input_pin, attempts = 0;

    while (attempts < MAX_ATTEMPTS){ // Loop until maximum attempts are reached
        printf ("Enter your PIN: ");
        
        if (scanf("%d", &input_pin) != 1) { // Check if input is a valid integer
            printf("Invalid input. Please enter a numeric PIN.\n");

            while (getchar() != '\n'); // clear the input buffer
            continue; // Skip the rest of the loop and prompt again
        }
        if (input_pin == CORRECT_PIN) { // Check if the entered PIN is correct
            printf("Access granted. Welcome!\n");
            return 0; // Exit the program successfully

        } else {
            attempts++; // Increment the attempt counter
            printf("Wrong PIN. %d attempt(s) left.\n", MAX_ATTEMPTS - attempts);
        }

    }

    printf("Too many failed attempts. Access denied.\n");
    
    return 0;
    
    
}