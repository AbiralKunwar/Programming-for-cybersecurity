#include <stdio.h>
int main(){
double population= 312032486; //assume population//
double secPerYear=365*24*60*60; // calculating second in 1 year :day/hrs/min/sec
 // calculating yearly changes

 double birthsPerYear= secPerYear/ 7.0;
 double deathsPerYear= secPerYear/ 13.0;
 double newimmigrantsPerYear= secPerYear/ 45.0;

 printf("Population Projection for the next 6 years: \n\n");

 for(int i=1; i<=5; i++){
    population= population+birthsPerYear+newimmigrantsPerYear-deathsPerYear;
    printf ("year %d: %.0f\n", i, population);
 }

 return 0;

}

