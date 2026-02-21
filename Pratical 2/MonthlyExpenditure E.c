#include <stdio.h>

int main() {

    const int ACCOMMODATION = 500; // constant value

    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;

    // asking user for input
    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);

    printf("Enter travel expenses: ");
    scanf("%f", &travelExpenses);

    // calculation using constant
    totalSpent = foodExpenses + leisureExpenses +clothesExpenses + ACCOMMODATION + travelExpenses;

    printf("\nTotal monthly expenditure: $%.2f\n", totalSpent);

    return 0;
}
