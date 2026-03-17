/* CalaculateMortgageA.c praticle 4 Part 2 (a) @author abiral*/

#include <stdio.h>
int main() {
    // Declare variables
    double salary1, salary2, largerSalary, smallerSalary, mortgageAmount;

    printf("Enter two salaries separated by a space: ");
    scanf ("%lf %lf", &salary1, &salary2);

    //selecting larger and smaller salary
    if (salary1>salary2)
        largerSalary=salary1;

    else
    largerSalary=salary2;

    //selecting smaller salary, smallersalary
    if (salary1<salary2)
        smallerSalary=salary2;

    else
    smallerSalary = salary1;
    // Calculate mortgage amount
    mortgageAmount = (largerSalary * 3);
    mortgageAmount += (smallerSalary);

    // Display the result
    printf("The maximum size of mortgage is: $ %.2lf \n", mortgageAmount);


    return 0;

}
