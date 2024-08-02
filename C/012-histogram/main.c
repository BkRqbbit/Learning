/*
    Print a histogram to represent
    the lenght of a word for a user input
*/

#include<stdio.h>
#include<stdbool.h>

int main(){
    int word_size = 0; 
    char c;
    bool status = false;

    while( (c = getchar()) != EOF ){
        if( c == ' ' || c == '\n' ){
            if( status ){
                putchar(':');
                putchar(' ');
                for( int i = 0; i < word_size; i++ ){
                    putchar('|');
                }
                putchar('\n');
            }
            status = false;
            word_size = 0;
        }
        else{
            status = true;
            ++word_size;
            putchar(c);
        }
    }
    
    return 0;
}