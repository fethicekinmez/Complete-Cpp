#include <iostream>

class Complex{
private:
    int real;
    int imag;
public:
    Complex(int r = 0, int i = 0): real(r), imag(i){}

    void getReal(){
        std::cout << "Real part: " << real << std::endl;
    }
    void getImag(){
        std::cout << "Imaginary part: " << imag << std::endl;
    }

    Complex operator+ (const Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

};


int main(){

    Complex c1(10, 5), c2(2, 4);

    Complex c3 = c1 + c2; // Calls operator+ function
    c3.getReal(); // Output: Real part: 12
    c3.getImag(); // Output: Imaginary part: 9

    return 0;
}