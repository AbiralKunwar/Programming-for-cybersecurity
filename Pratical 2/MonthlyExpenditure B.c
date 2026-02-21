#include <stdio.h>

int main (){

    float foodExpenses = 510.0;
    float leisureExpenses = 340.0;
    float clothesExpenses = 120.0;
    float totalSpent;


    totalSpent = foodExpenses + leisureExpenses + clothesExpenses;

    printf("The total expenditure this month was $%.2f\n",totalSpent);

}
