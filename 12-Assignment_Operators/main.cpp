#include <iostream>

int main(){

    int num1 = 10;
    int num2 = 40;

    num1 += num2; // num1 = num1 + num2
    std::cout << "num1 += num2: " << num1 << std::endl; // num1 += num2: 50
    num1 -= num2; // num1 = num1 - num2
    std::cout << "num1 -= num2: " << num1 << std::endl; // num1 -= num2: 10

    return 0;
}