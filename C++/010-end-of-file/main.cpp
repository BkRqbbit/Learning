/*
    Read user input
    Program ends when user indicates EOF
    It is done with Ctrl + d (for linux!)
*/

#include<iostream>

int main(){
    int value;

    while( std::cin >> value ){
        std::cout << "Input: " << value << std::endl;
    }

    std::cout << "EOF entered!" << std::endl;
    
    return 0;
}