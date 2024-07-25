#include<stdio.h>
#include<stdbool.h>

int main(){
    int words = 0; // Keep track of the number of words
    char c; // Buffer variable to read input string
    bool inside = false; // Determine whether inside or outside of a word

    while( (c = getchar()) != EOF ){
        if( c == ' ' || c == '\n' ){
            if( inside == true ){
                ++words;
            }
            inside = false;
        }
        else{
            inside = true;
        }
    }

    if( inside == true ){
        ++words;
    }

    printf("Total words: %d\n", words);

    return 0;
}