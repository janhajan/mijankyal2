#include <iostream>
#include <cmath>
using namespace std;

class Area {
protected:
    double r; 
public:
    void setarea(double x) {
        r = x; 
    }

    virtual double getarea() {
        return 0; 
    }

    virtual ~Area() {}         
};

class Circle : public Area {
public:
    void geta(double &x) {
        x = 2 * M_PI * r; 
    }
    
    double getarea() {
        return M_PI * r * r; 
    }
};

int main() {
    Circle circle;  
    double radius, area, circumference;

    cout << "Enter circle radius: ";
    cin >> radius;

    circle.setarea(radius);
    area = circle.getarea(); 
    circle.geta(circumference); 

    cout << "Circle area: " << area << endl;
    cout << "Circle circumference: " << circumference << endl;

    return 0;
}
