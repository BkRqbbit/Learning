/*
    Fahrenheit to Celsius converter
    Formula: (5/9) * (F-32)

    V2: Add formatted output
*/

#include<stdio.h>

#define LOW_LIMIT 0
#define HIGH_LIMIT 300
#define STEP 20

int main(){
    int fahrenheit = LOW_LIMIT;
    int celsius = 0;

    while( fahrenheit <= HIGH_LIMIT ){
        celsius = (5/9.0) * (fahrenheit-32);
        printf("%3dF %3dC\n", fahrenheit, celsius);

        fahrenheit += STEP;
    }

    return 0;
}
