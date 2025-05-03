#include <iostream>

int main(){

    {
        std::cout << "Block 1" << std::endl;
        {
            std::cout << "Block 2" << std::endl;
            {
                std::cout << "Block 3" << std::endl;
                {
                    std::cout << "Block 4" << std::endl;
                    {
                        std::cout << "Block 5" << std::endl;
                    }
                }
            }
        }
    }

    return 0;
}
/*
Block 1
Block 2
Block 3
Block 4
Block 5
*/