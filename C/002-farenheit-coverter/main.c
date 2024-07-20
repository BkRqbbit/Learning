#include<stdio.h>

int main(){
    int farenheit = 0;
    float celsius = 0;

    printf("Enter the value: ");
    scanf("%d", &farenheit);

    celsius = (5.0 / 9) * (farenheit - 32);

    printf("%dF is equal to %.2fC\n", farenheit, celsius);
    
    return 0;
}