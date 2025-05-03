#include <iostream>
using namespace std;

namespace firstSpace{
    void print(){
        cout << "Hello from firstSpace" << endl;
    }
}

namespace secondSpace{
    void print(){
        cout << "Hello from secondSpace" << endl;
    }
}

int main(){

    firstSpace::print();  //Hello from firstSpace
    secondSpace::print(); //Hello from secondSpaceæ

    return 0;
}