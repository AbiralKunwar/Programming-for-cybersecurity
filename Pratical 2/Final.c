#include <stdio.h>

int main() {

    const int ACCOMMODATION = 500;   // Fixed monthly rent declaration

    float food, leisure, clothes, travel;
    float totalvalue;

    // Ask user for input expenses
    printf("Enter food expenses: ");
    scanf("%f", &food);

    while (food < 0) { // using while is when user input negative amount it display to enter the positive amount. keep Asking until valid input
        printf("Invalid value entered. \nPlease enter a positive amount: ");
        scanf("%f", &food);
    }

    printf("Enter leisure expenses: ");
    scanf("%f", &leisure);

    while (leisure < 0) {
        printf("Invalid value entered. \nPlease enter a positive amount: ");
        scanf("%f", &leisure);

    }

    printf("Enter clothes expenses: ");
    scanf("%f", &clothes);

    while (clothes < 0) {
        printf("Invalid value entered. \nPlease enter a positive amount: ");
        scanf("%f", &clothes);

    }


    // Calculating total spending by adding each expenses + with accomodation
    totalvalue = food + leisure + clothes + ACCOMMODATION;

    // FINAL RESULT
    printf("\nTotal monthly expenditure is $%.2f\n", totalvalue);

    return 0;
}
