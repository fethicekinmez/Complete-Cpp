#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> vector_ = {10, 20, 30, 40, 50};

    for(int value: vector_){
        cout << value << " ";
    }
    cout << endl;

    return 0;
}

// 10 20 30 40 50 