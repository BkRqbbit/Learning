/*
    Evaluate the following instruction:
    getchar != EOF
*/

#include<stdio.h>

int main(){
    int result = getchar() != EOF;
    
    printf("Result: %d\n", result);
    
    return 0;
}