#include <stdio.h>
int main(){
    double celsius, fahrenheit;
    printf("Enter the Temperature in (Celsius) to convert into fahrenheit: ");
    scanf ("%lf", &celsius);

    fahrenheit= (9.0/5)*celsius+32;
    printf("Temperature in fahrenheit: %.2f\n", fahrenheit);


return 0;
}


