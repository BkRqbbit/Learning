/*
    Count the total amount of characters entered

    You can redirect the content of a file:
    ./main < input_file

    Or if data is entered by keyboard, use
    Ctrl + d to send 'EOF' signal
*/

#include<stdio.h>

int main(){
    double size = 0; // Keeps track of the total number of characters entered

    // Process input, and increments counter
    while( getchar() != EOF )
        ++size;

    // Show results
    printf("Total characters: %.0f\n", size);

    return 0;
}
