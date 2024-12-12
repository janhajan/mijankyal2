#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[50];      
    char phone[20];     
    char gender;        
    int age;            

public:
    Person(const char* n = "Unknown", const char* p = "000-000", char g = 'U', int a = 0) {
        strncpy(name, n, 49);    
        name[49] = '\0';        
        strncpy(phone, p, 19);  
        phone[19] = '\0';
        gender = g;
        age = a;
    }

    friend ostream& operator<<(ostream& os, const Person& obj) {
        os << "Name: " << obj.name << "\n"
           << "Phone: " << obj.phone << "\n"
           << "Gender: " << (obj.gender == 'M' ? "Male" : (obj.gender == 'F' ? "Female" : "Unknown")) << "\n"
           << "Age: " << obj.age;
        return os;
    }
};

int main() {
    Person person1("Alice", "123-456", 'F', 25);
    Person person2("Bob", "987-654", 'M', 30);
    Person person3;

    cout << "Person 1:\n" << person1 << endl;
    cout << "\nPerson 2:\n" << person2 << endl;
    cout << "\nPerson 3 (default):\n" << person3 << endl;

    return 0;
}
