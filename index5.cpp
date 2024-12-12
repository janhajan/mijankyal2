// 6.2 
#include <iostream>
#include <cmath> 
using namespace std;

class Complex {
private:
    double real; 
    double imag;

public:

    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    ~Complex() {}

    double get() const {
        return sqrt(real * real + imag * imag);
    }

    bool operator==(const Complex& other) const {
        return (real == other.real && imag == other.imag);
    }

    bool operator>(const Complex& other) const {
        return this->get() > other.get();
    }

    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};

int main() {

    Complex c1(3.0, 4.0); 
    Complex c2(1.0, 2.0); 
    Complex c3(3.0, 4.0); 

    cout << "c1: " << c1 << endl;
    cout << "c3: " << c3 << endl;
    if (c1 == c3) {
        cout << "c1 + c3" << endl;
    } else {
        cout << "c1 != c3" << endl;
    }

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    if (c1 > c2) {
        cout << "c1 > c2" << endl;
    } else {
        cout << "c1 < c2" << endl;
    }

    return 0;
}


