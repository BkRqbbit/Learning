#include<stdio.h>
#include<stdbool.h>

int main(){
    char c;
    bool space = false;

    while( (c = getchar()) != EOF ){
        if( c == ' ' ){
            if( space ){
                continue;
            }
            space = true;
            putchar(c);
        }
        else{
            space = false;
            putchar(c);
        }
    }
    
    return 0;
}