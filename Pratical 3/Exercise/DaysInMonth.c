#include <stdio.h>

int main() {
    int month, days, year;

    printf("Enter month (1-12) : ");
    if (scanf("%d", &month) != 1 || month < 1 || month > 12) { // Validate month input
        printf("Invalid input. Please enter a valid month (1-12).\n");
        return 1;
    }
    printf("Enter year: ");
    if (scanf("%d", &year) != 1 || year < 1) { // Validate year input
        printf("Invalid input. Please enter a valid year (non-negative).\n");
        return 1;

    }
    switch (month) { // Determine the number of days based on the month and year
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: // Months with 31 days
            days = 31;
            break;
        case 4: case 6: case 9: case 11:// Months with 30 days
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; // Leap year
            } else {
                days = 28; // Non-leap year
            }
            break;
        default:
            printf("Invalid month.\n");
            return 1;
    }

    printf("The number of days in month %d of year %d is %d.\n", month, year, days);
    return 0;
}