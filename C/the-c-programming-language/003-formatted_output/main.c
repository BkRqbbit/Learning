/*
    Taking the previous prgraom (fahrenheit to celsius converter)
    format the input to make it easier to understand
*/

#include<stdio.h>

#define LOW_LIMIT 0
#define HIGH_LIMIT 300
#define STEP 20

int main(){
    int fahrenheit = LOW_LIMIT;
    int celsius = 0;

    while( fahrenheit <= HIGH_LIMIT ){
        celsius = (5/9.0) * (fahrenheit-32);

        /*
            To add width to the output, we can specify it in the following format:
            Ex: printf("%xd\n", value);
            where `x` is an integer number
        */
        printf("%3dF %6dC\n", fahrenheit, celsius);

        fahrenheit += STEP;
    }

    return 0;
}
