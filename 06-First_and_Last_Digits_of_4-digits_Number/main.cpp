#include <iostream>

int main(){

    int four_digit_number = 1234; // Example 4-digit number

    // Extracting the first digit
    int first_digit = four_digit_number / 1000;
    // Extracting the last digit
    int last_digit = four_digit_number % 10;
    // Printing the first and last digits
    std::cout << "First digit: " << first_digit << std::endl; // First digit: 1
    std::cout << "Last digit: " << last_digit << std::endl; // Last digit: 4

    return 0;
}