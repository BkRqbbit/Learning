/*
    This program takes two limits.
    All the integer values in between
    are added and finally printed
*/

#include<iostream>

int main(){
    int low_limit = 0;
    int high_limit = 0;
    int result = 0;
    int step = 0;

    std::cout << "Enter lower limit: ";
    std::cin >> low_limit;

    std::cout << "Enter high limit: ";
    std::cin >> high_limit;

    step = low_limit;

    while( step <= high_limit ){
        result += step;
        ++step;
    }

    std::cout << "Sum of range is: " << result << std::endl;
    
    return 0;
}