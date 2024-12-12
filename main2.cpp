//Queue data structure implementation

#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

class Queue {
private:
    int arr[MAX_SIZE]; 
    int front;       
    int rear;          
    int size;         

public:
    Queue() {
        front = 0;        
        rear = -1;        
        size = 0;         
    }

    void enqueue(int value) {
        if (size >= MAX_SIZE) {
            cout << "queuen liqn e, lcnel hnaravor che\n";
            return;
        }
        rear = (rear + 1) % MAX_SIZE; 
        arr[rear] = value;           
        size++;                      
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "queuen datark e jnjely hnaravor che\n";
            return -1; 
        }
        int removedValue = arr[front]; 
        front = (front + 1) % MAX_SIZE; 
        size--;                         
        return removedValue;            
    }

    int getFront() {
        if (isEmpty()) {
            cout << "queuen datark e\n";
            return -1;
        }
        return arr[front]; 
    }

    bool isEmpty() {
        return size == 0; 
    }
    int getSize() {
        return size;
    }
};

int main() {
    Queue q;
    q.enqueue(10); 
    q.enqueue(20); 
    q.enqueue(30); 

    cout << "arajin tarr " << q.getFront() << endl; 
    cout << "jnjel tarry " << q.dequeue() << endl;   
    cout << "arajin tarr " << q.getFront() << endl; 

    cout << "queuei chapy " << q.getSize() << endl;    
    cout << "queuen datark e? " << (q.isEmpty() ? "ayo" : "voch") << endl;

    return 0;
}
