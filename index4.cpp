// 6.1

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    Number operator+(const Number& other) const {
        return Number(this->value + other.value);
    }

    Number operator-(const Number& other) const {
        return Number(this->value - other.value);
    }

    Number operator*(const Number& other) const {
        return Number(this->value * other.value);
    }

    Number& operator=(const Number& other) {
        if (this != &other) {
            this->value = other.value;
        }
        return *this;
    }

    Number operator-() const {
        return Number(-this->value);
    }

    friend ostream& operator<<(ostream& os, const Number& num) {
        os << num.value;
        return os;
    }
};

int main() {
    Number a(5), b(3), c;

    c = a + b;
    cout << "a + b = " << c << endl;

    c = a - b;
    cout << "a - b = " << c << endl;

    c = a * b;
    cout << "a * b = " << c << endl;

    c = -a;
    cout << "-a = " << c << endl;

    c = a;
    cout << "c = a; c = " << c << endl;

    return 0;
}

