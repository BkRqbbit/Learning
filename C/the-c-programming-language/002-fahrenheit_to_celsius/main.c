/*
    Fahrenheit to Celsius converter
    Formula: (5/9) * (F-32)

    V2: Add formatted output
    V3: Change values type (int -> float) for more precise results
        Limit the number of decimal numbers shown
*/

#include<stdio.h>

#define LOW_LIMIT 0
#define HIGH_LIMIT 300
#define STEP 20

int main(){
    float fahrenheit = LOW_LIMIT;
    float celsius = 0;

    while( fahrenheit <= HIGH_LIMIT ){
        celsius = (5/9.0) * (fahrenheit-32);
        printf("%6.2fF %6.2fC\n", fahrenheit, celsius);
        fahrenheit += STEP;
    }

    return 0;
}
