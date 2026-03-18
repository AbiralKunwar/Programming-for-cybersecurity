#include <stdio.h>

int main() {

    int previous_meter, current_meter, day, month;
    int units_consumed;

    printf("Enter previous meter reading, current meter reading, day, month: ");

    if (scanf("%d %d %d %d", &previous_meter, &current_meter, &day, &month) != 4) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nYou entered: %d %d %d %d\n",
           previous_meter, current_meter, day, month);

    // Check meter range
    if (previous_meter < 0 || previous_meter > 9999) {
        printf("Error: Previous reading out of range.\n");
    }

    if (current_meter < 0 || current_meter > 9999) {
        printf("Error: Current reading out of range.\n");
    }

    // Previous not greater than current
    if (previous_meter > current_meter) {
        printf("Error: Previous cannot be greater than current.\n");
    }

    // Units consumed
    units_consumed = current_meter - previous_meter;

    if (units_consumed > 1000) {
        printf("Error: Units consumed cannot exceed 1000.\n");
    }

    // Month check
    if (month < 1 || month > 12) {
        printf("Error: Month must be between 1 and 12.\n");
    }

    // Day check (simple validation)
    if (day < 1 || day > 31) {
        printf("Error: Day must be between 1 and 31.\n");
    }

    // Proper day validation using month
    if (month == 2) {
        if (day < 1 || day > 29) {
            printf("Error: Invalid day for February.\n");
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30) {
            printf("Error: Invalid day for this month.\n");
        }
    }
    else {
        if (day < 1 || day > 31) {
            printf("Error: Invalid day for this month.\n");
        }
    }

    return 0;
}