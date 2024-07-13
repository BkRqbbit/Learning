#include<iostream>

int main(){

    int result = 0;
    int step = 1;

    while( step <= 10 ){
       result += step;
       step++;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}