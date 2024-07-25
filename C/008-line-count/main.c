#include<stdio.h>

int main(){
    int total_lines = 0;
    char c;

    while( (c = getchar()) != EOF ){
        if( c == '\n' ){
            ++total_lines;
        }
    }

    printf("Total number of lines: %d\n", total_lines);
    
    return 0;
}