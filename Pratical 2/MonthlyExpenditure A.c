#include <stdio.h>

int main() {

    float foodExpenses = 300.0;  //variable declaration of food expenses
    float leisureExpenses = 100.0;
    float clothesExpenses = 50.0;
    float totalSpent;

    // calculating totalspent
    totalSpent =foodExpenses+leisureExpenses+clothesExpenses;

    printf("The total expenditure this month was: $%.2f\n", totalSpent);

    return 0;
}
