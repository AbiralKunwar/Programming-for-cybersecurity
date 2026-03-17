#include <stdio.h>
// Creating Function for selecting larger salary 
double largerSalary(double salary1, double salary2){
    if (salary1>salary2)
        return salary1;

    else
        return salary2;    
}
// Creating Function for selecting smaller salary
double smallerSalary(double salary1, double salary2){
    if (salary1<salary2)
        return salary1;

    else
        return salary2;    
}

int main() {
    // declare salary1, salary2 and mortgage
    double salary1, salary2, mortgage;

    printf("Enter two salaries separated by a space: ");
    scanf ("%lf %lf", &salary1, &salary2);

    // calculate mortgage with calling largerSalary function
    mortgage=largerSalary(salary1,salary2) * 3;
    // calling smallerSalary function and adding to mortgage
    mortgage += smallerSalary(salary1,salary2);

    // display the result
    printf("The maximum size of mortgage is: $ %.2lf \n", mortgage);

    return 0;

    }