/*
    Read user input
    Count the number of characters entered
    Show the result to the user
    Program stops when EOF is entered (Ctrl + d).
*/

#include<stdio.h>

int main(){
    int counter = 0;
    char c;

    while( (c = getchar()) != EOF ){
        ++counter;
    }

    printf("Total characters entered: %d\n", counter);

    return 0;
}