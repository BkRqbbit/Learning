/*
    Takes user input and copies to output
    Program ends when eof is reached
*/

#include<stdio.h>

int main(){
    char c;

    printf("Enter a message:\n");
    while( (c = getchar()) != EOF ){
        putchar(c);
    }

    printf("End-of-file has been reached!\n");
    
    return 0;
}