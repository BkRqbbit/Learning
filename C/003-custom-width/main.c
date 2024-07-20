/*
    Farenheit to Celsius converter
    Covert a range of values
    Display a table with custom width
*/

#include<stdio.h>

int main(){
    int low_limit = 0;
    int high_limit = 0;
    int increment = 0;
    int farenheit = 0;
    float celsius = 0;

    printf("Enter low limit: ");
    scanf("%d", &low_limit);

    printf("Enter high limit: ");
    scanf("%d", &high_limit);

    printf("Enter increment: ");
    scanf("%d", &increment);

    for( int current = low_limit; current <= high_limit; current += increment ){
        farenheit = current;
        celsius = (5.0 / 9 ) * (farenheit - 32);
        printf("%4d %8.2f\n", farenheit, celsius);
    }

    return 0;
}