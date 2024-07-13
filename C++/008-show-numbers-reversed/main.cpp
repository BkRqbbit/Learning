/*
    Show the integer numbers that are
    in between a range of given numbers.
    Start from top, to down!
*/

#include<iostream>

int main(){
    int low_limit = 0;
    int high_limit = 0;
    int current = 0;

    std::cout << "Low limit: ";
    std::cin >> low_limit;

    std::cout << "High limit: ";
    std::cin >> high_limit;

    current = high_limit;

    while( current >= low_limit ){
        std::cout << current << std::endl;
        --current;
    }
    
    return 0;
}