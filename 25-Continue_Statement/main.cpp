#include <iostream>

int main(){

    for(int i=1; i<=10; i++){
        if(i == 5){
            std::cout << "Skipping the rest of the loop at i = " << i << std::endl;
            continue; // Continue statement to skip the rest of the loop when i is 5
        }
        std::cout << "Current value of i: " << i << std::endl;
    }
    return 0;
}

/*

Current value of i: 1
Current value of i: 2
Current value of i: 3
Current value of i: 4
Skipping the rest of the loop at i = 5
Current value of i: 6
Current value of i: 7
Current value of i: 8
Current value of i: 9
Current value of i: 10

*/