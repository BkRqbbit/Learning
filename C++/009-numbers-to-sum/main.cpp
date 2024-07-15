/*
    Ask user for numbers to add.
    We don't know how many they are!
    Show the result of the calculation
*/

#include<iostream>

int main(){
    int number = 0;
    int result = 0;

    while( std::cin >> number ){
        result += number;
    }

    std::cout << "Result: " << result << std::endl;
    
    return 0;
}