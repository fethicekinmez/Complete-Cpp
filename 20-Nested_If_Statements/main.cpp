#include <iostream>

int main(){

    int theoryScore, practicalScore;
    std::cout << "Enter theory score: ";
    std::cin >> theoryScore;
    if(theoryScore >= 50){
        std::cout << "Enter practical score: ";
        std::cin >> practicalScore;
        if(practicalScore >= 50){
            std::cout << "You passed the exam." << std::endl;
        } else {
            std::cout << "You failed the exam due to practical score." << std::endl;
        }
    } else {
        std::cout << "You failed the exam due to theory score." << std::endl;
    }

}