#include <iostream>
#include <unistd.h> // for sleep function

int main(){
    
    for(int i=0; i<10; i++){
        if(i == 5){
            std::cout << "Breaking out of the loop at i = " << i << std::endl;
            break; // Break statement to exit the loop when i is 5
        }
        std::cout << "Current value of i: " << i << std::endl;
        sleep(1); // Sleep for 1 second to simulate some processing time
    }
}

/*
Current value of i: 0
Current value of i: 1
Current value of i: 2
Current value of i: 3
Current value of i: 4
Breaking out of the loop at i = 5
*/