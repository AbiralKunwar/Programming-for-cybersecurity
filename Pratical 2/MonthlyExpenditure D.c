#include <stdio.h>

int main() {

    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float accommodationExpenses;
    float travelExpenses;
    float totalSpent;

    // asking input for userr
    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);

    printf("Enter accommodation expenses: ");
    scanf("%f", &accommodationExpenses);

    printf("Enter travel expenses: ");
    scanf("%f", &travelExpenses);

    // calculating totalspent of all above expenses
    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodationExpenses +travelExpenses;

    printf("\nTotal monthly expenditure: $%.2f\n", totalSpent);

    return 0;
}
