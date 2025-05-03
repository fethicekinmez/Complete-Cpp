#include <iostream>

using namespace std;

int main(){
    // Logical Operators
    // && (Logical AND)
    // || (Logical OR)
    // ! (Logical NOT)
    bool a = true;
    bool b = false;
    // Logical AND (&&)
    cout << "Logical AND (&&): " << (a && b) << endl; // Logical AND (&&): 0
    // Logical OR (||)
    cout << "Logical OR (||): " << (a || b) << endl; // Logical OR (||): 1
    // Logical NOT (!)
    cout << "Logical NOT (!): " << (!a) << endl; // Logical NOT (!): 0


    return 0;
}