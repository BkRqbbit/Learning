#include<stdio.h>

int main(){
    int fahrenheit = 0;
    int celsius = 0;

    // Manually define the value to convert
    fahrenheit = 280;

    // Perform convertion
    celsius = ( 5 * (fahrenheit - 32)) / 9;

    // Print out results
    printf("%dF to C is: %d\n", fahrenheit, celsius);
    
    return 0;
}