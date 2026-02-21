#include <stdio.h>

int main() {

    float foodExpenses = 250.0;
    float leisureExpenses = 120.0;
    float clothesExpenses = 80.0;
    float accommodationExpenses = 500.0;
    float travelExpenses = 60.0;
    float totalSpent;

 //calculating total spent
    totalSpent = foodExpenses + leisureExpenses +clothesExpenses + accommodationExpenses + travelExpenses;

    // display result
    printf("Total monthly expenditure: $%.2f\n", totalSpent);

    return 0;
}
