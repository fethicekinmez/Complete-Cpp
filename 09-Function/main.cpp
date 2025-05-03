#include <iostream>

int add(int a, int b){
    return a + b;
}

void print(int a){
    std::cout << "The value is: " << a << std::endl;
}

int main(){

    int x = add(5, 10);
    print(x); // The value is: 15

    return 0;
}