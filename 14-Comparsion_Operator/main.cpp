#include <iostream>

int main(){

    int a = 10;
    int b = 20;

    if(a == b){
        std::cout << "a is equal to b" << std::endl;
    }else{
        std::cout << "a is not equal to b" << std::endl;
    }

    if(a > b){
        std::cout << "a is greater than b" << std::endl;
    }else{
        std::cout << "a is not greater than b" << std::endl;
    }

    if(a < b){
        std::cout << "a is less than b" << std::endl;
    }else{
        std::cout << "a is not less than b" << std::endl;
    }

    return 0;
}
