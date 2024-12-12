//Stack data structure implementation 

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
class Stack {
private:
    int arr[MAX_SIZE]; 
    int top;           
public:
    Stack() {
        top = -1; 
    }
    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "stacky liqn e , avelacnel hnaravor che\n";
            return;
        }
        arr[++top] = value; 
    }
    int pop() {
        if (top < 0) {
            cout << "stacky datark e , jnjely hnaravor che\n";
            return -1;
        }
        return arr[top--]; 
    }

    int peek() {
        if (top < 0) {
            cout << "stacky datark e\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;

    s.push(10); 
    s.push(20); 
    cout << "verevi tarr: " << s.peek() << endl; 

    cout << "durs berac " << s.pop() << endl; 
    cout << "stacky datark e? " << (s.isEmpty() ? "ayo" : "voch") << endl;

    return 0;
}
