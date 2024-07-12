/*
    Simple program to ask for two numbers
    and show the result of their addition!
*/

// Libraries
#include<iostream>

int main(){
    int x, y; // Creating of two variables to hold values
    int z; // Store the result of the addtion

    // Ask the user to input the values to operate
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;

    // Perform the calculation
    z = x + y;
    
    // Show results to the user
    std::cout << "The result is: " << z << std::endl;
    
    return 0;
}