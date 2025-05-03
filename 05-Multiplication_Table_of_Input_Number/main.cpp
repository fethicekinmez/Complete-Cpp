#include <iostream>

int main(){

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "Multiplication table of " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " x " << i << " = " << number * i << "\n";
    }

    return 0;
}
/*
9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 6 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90
*/