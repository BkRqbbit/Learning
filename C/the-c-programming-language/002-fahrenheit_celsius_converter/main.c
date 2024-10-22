/*
    Fahrenheit to Celsius converter
    Formula: (5/9) * (F-32)

    V2: Add formatted output
    V3: Change values type (int -> float) for more precise results
        Limit the number of decimal numbers shown
    V4: Implement convertion from F to C, and viceversa
        User can chose what convertion he wants to perform
*/

#include<stdio.h>

#define LOW_LIMIT 0
#define HIGH_LIMIT 300
#define STEP 20

void show_menu();

int main(){
    int option = -1;

    while( option != 0 ){
        show_menu();

        printf("> ");
        scanf("%d", &option);
    }

    float fahrenheit = LOW_LIMIT;
    float celsius = 0;

    while( fahrenheit <= HIGH_LIMIT ){
        celsius = (5/9.0) * (fahrenheit-32);
        printf("%6.2fF %6.2fC\n", fahrenheit, celsius);
        fahrenheit += STEP;
    }

    return 0;
}

void show_menu(){
    printf("-=[Welcome to the converter]=-\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("0. Exit\n");
}
