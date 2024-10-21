/*
    Fahrenheit to Celsius converter
    Formula: (5/9) * (F-32)
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
        printf("%dF is %dC\n", fahrenheit, celsius);

        fahrenheit += STEP;
    }

    return 0;
}
