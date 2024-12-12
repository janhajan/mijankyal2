// 9.1

#include <iostream>
using namespace std;

class Add {
protected:
    double x, y;
public:
    Add(double a = 0, double b = 0) : x(a), y(b) {}

    void inp() {
        cout << "Enter x and y: ";
        cin >> x >> y;
    }
    virtual void show() {
        cout << "Operation" << endl;
    }

    virtual void func() {
        cout << "Performing operation" << endl;
    }

    virtual ~Add() {}
};

class Sum : public Add {
public:
    Sum(double a = 0, double b = 0) : Add(a, b) {}

    void show() {
        cout << "Sum" << endl;
    }

    void func() {
        cout << x << " + " << y << " = " << x + y << endl;
    }
};

class Sub : public Add {
public:
    Sub(double a = 0, double b = 0) : Add(a, b) {}

    void show() {
        cout << "Subtraction" << endl;
    }

    void func() {
        cout << x << " - " << y << " = " << x - y << endl;
    }
};

class Mult : public Add {
public:
    Mult(double a = 0, double b = 0) : Add(a, b) {}

    void show() {
        cout << "Multiplication" << endl;
    }

    void func() {
        cout << x << " * " << y << " = " << x * y << endl;
    }
};

class Divis : public Add {
public:
    Divis(double a = 0, double b = 0) : Add(a, b) {}

    void show() {
        cout << "Division" << endl;
    }

    void func() {
        if (y == 0) {
            cout << "Cannot divide by zero" << endl;
        } else {
            cout << x << " / " << y << " = " << x / y << endl;
        }
    }
};

int main() {
    Add* operations[4];

    operations[0] = new Sum();
    operations[1] = new Sub();
    operations[2] = new Mult();
    operations[3] = new Divis();

    for (int i = 0; i < 4; i++) {
        operations[i]->inp();    
        operations[i]->show(); 
        operations[i]->func();  
        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        delete operations[i];
    }

    return 0;
}
