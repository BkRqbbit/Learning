// V1: Perform convertion of a single value
// V2: Convert a range of values with the given limits

#include<stdio.h>

int main(){
    int lower_limit = 0;
    int higher_limit = 300;
    int step = 20;

    int fahrenheit = 0;
    int celsius = 0;

    while( fahrenheit <= higher_limit ){
        celsius = ( 5 * (fahrenheit - 32)) / 9;
        printf("%dF is %dC\n", fahrenheit, celsius);
        fahrenheit += step;
    }

    return 0;
}