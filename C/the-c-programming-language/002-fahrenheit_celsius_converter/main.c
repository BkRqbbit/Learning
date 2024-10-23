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

int get_option(char* message);
void show_menu();
void convertion( int option );

int main(){
    int option = -1;

    while( option != 0 ){
        show_menu();
        option = get_option("> ");
        convertion( option );
    }

    return 0;
}

int get_option( char* message ){
    int status = 0;
    int value = -1;

    printf("%s", message);
    status = scanf("%d", &value);
    while( getchar() != '\n' );

    if( status == 0 ){
        printf("\n");
        printf("[Error]: The data entered is not valid!\n");
        printf("[Error]: Try again, enter only integer values!\n");
        printf("\n");
        show_menu();
        return get_option( message );
    }

    return value;
}

void show_menu(){
    printf("-=[Welcome to the converter]=-\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("0. Exit\n");
}

void convertion( int option ){
    // This program will only offer two types of convertion
    // Fahrenheit to celsius, and vice-versa.
    // Any other option will be discarted here
    if( option < 1 || option > 2 ){
        printf("\n");
        printf("[Error]: This is not a valid option!\n");
        printf("[Info]: Choose one option from menu!\n");
        printf("\n");
    }
}
