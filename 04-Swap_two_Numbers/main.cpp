#include <iostream>
using namespace std;

int main(){

    int num1 = 1, num2 = 9;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl; // Before swapping: num1 = 1, num2 = 9

    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl; // After swapping: num1 = 9, num2 = 1

    return 0;
}


