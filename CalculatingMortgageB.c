/* CalaculateMortgageB.c praticle 4 Part 2 (b) @author abiral*/

#include <stdio.h>
double largerSalary(double salary1, double salary2) {
    return 1;
}
double smallerSalary(double salary1, double salary2) {
    return 1;
}




int main() {
    // declare salary1, salary2 and mortgage
    double salary1, salary2, mortgage;

    printf("Enter two salaries separated by a space: ");
    scanf ("%lf %lf", &salary1, &salary2);

    // calculate mortgage with calling largerSalary function
    mortgage = largerSalary(salary1,salary2) * 3;
    // calling smallerSalary function and adding to mortgage
    mortgage += smallerSalary(salary1,salary2);

    // display the result
    printf("The maximum size of mortgage is: $ %.2lf \n", mortgage);

    return 0;

}
 
// Your program should run though the mortgage displayed is not correct. Can you explain why? //
//Answer: The mortgage displayed is not correct because the functions are not decleared, 
//So temporary stubs are used which always return 1, so the mortgage is calculated as 3*1 + 1 = 4, which is not the correct mortgage amount.