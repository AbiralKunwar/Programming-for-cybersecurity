#include <stdio.h>

int main(){
    int today, future_days, days_after_today;
    printf("Enter today's day (0-6) and the number of days in the future: "); // Prompt the user for input

    if (scanf("%d", &today) != 1 || today < 0 || today > 6) { // Validate today's day input
        printf("Invalid input. Please enter a valid day (0-6).\n");
        return 1;

    }
    printf("Enter number of days after today: ");
    if (scanf("%d", &future_days) != 1 || future_days < 0) { // Validate future days input
        printf("Invalid input. Please enter a non-negative number of days.\n");
        return 1;
    }

    days_after_today = (today + future_days) % 7; // Calculate the future day number using modulo to wrap around the week

    printf("Future day number is %d.\n",days_after_today);
    return 0;
}
