#include<stdio.h>
#include<stdbool.h>

int main(){
    char c;
    bool status = false;

    while( (c = getchar()) != EOF ){
        if( c == ' ' || c == '\n' ){
            if( status == true ){
                putchar('\n');
            }
            status = false;
        }
        else{
            status = true;
            putchar(c);
        }
    }
    
    return 0;
}