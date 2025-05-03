#include <iostream>

int main(){

    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if( number % 2 == 0){
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }
}

/*
Enter an integer: 99
99 is odd.
*/

/*
Enter an integer: 22
22 is even.
*/