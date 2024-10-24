/*
    Read input until EOF is detected
    All entered input, must be copied to output

    You can use data files in the following way:
    // Compile program first
    gcc main.c -o main
    // Execute and redirect data of file, to the input of the program
    ./main < input_file

    If data is entered by keyboard, you can send the 'EOF' signal
    with the following combination: Ctrl + d
*/

#include<stdio.h>

int main(){
    char c;

    while( (c = getchar()) != EOF ){
        putchar(c);
    }

    return 0;
}
