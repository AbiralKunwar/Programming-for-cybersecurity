#include <stdio.h>
int main(){
    double monthlySaving;
    double accountValue= 0.0;
    double interestRatePerMonth= 0.05/12;

    printf("Enter Monthly Saving amount: ");
    scanf ("%lf", &monthlySaving);

    //Account Value = (Previous Value + Monthly Saving) × (1 + Monthly Interest Rate)

    for (int i=1; i<=6; i++){
        accountValue=(accountValue+monthlySaving)*(1 + interestRatePerMonth);
    }
    printf("The Value of Account after 6 months: %.2f\n", accountValue);

    return 0;
}
