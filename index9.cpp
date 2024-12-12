#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    double param1, param2, param3;
public:
    Shape() : param1(0), param2(0), param3(0) {}

    virtual void inp() {
        cout << "Enter parameters: ";
        cin >> param1 >> param2 >> param3;
    }

    virtual double area() {
        return 0;
    }

    virtual void show() {
        cout << "Shape" << endl;
    }

    virtual ~Shape() {}
};

class Rectangle : public Shape {
public:
    void inp() {
        cout << "Enter rectangle width and height: ";
        cin >> param1 >> param2;
    }

    double area() {
        return param1 * param2;
    }

    void show() {
        cout << "Rectangle" << endl;
    }
};

class Circle : public Shape {
public:
    void inp() {
        cout << "Enter circle radius: ";
        cin >> param1;
    }

    double area() {
        return M_PI * param1 * param1; 
    }

    void show() {
        cout << "Circle" << endl;
    }
};

class Triangle : public Shape {
public:
    void inp() {
        cout << "Enter triangle sides a, b, and c: ";
        cin >> param1 >> param2 >> param3;
    }

    double area() {
        double s = (param1 + param2 + param3) / 2;
        return sqrt(s * (s - param1) * (s - param2) * (s - param3));
    }

    void show() {
        cout << "Triangle" << endl;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Rectangle();
    shapes[1] = new Circle();
    shapes[2] = new Triangle();

    for (int i = 0; i < 3; i++) {
        shapes[i]->inp();
        shapes[i]->show();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
