#include <iostream>
#include <cmath> 

using namespace std;

class Samp {
private:
    double* arr; 
    int size;    

public:
    Samp() : arr(nullptr), size(0) {}
    void set() {
        cout << "zangvaci tarreri qanaky";
        cin >> size;
        arr = new double[size]; 
        cout << "Введите " << size << " double tipi element" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }
    void show() {
        if (!arr) {
            cout << "zangvacy generacvac che!" << endl;
            return;
        }
        cout << "zangvacy tarrery ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
        int minIndex = 0;
        for (int i = 1; i < size; ++i) {
            if (abs(arr[i]) < abs(arr[minIndex])) {
                minIndex = i;
            }
        }
        cout << "nvazaguyn bacardzak arjeq unecox tarreri tivy " << minIndex << endl;

        double sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        double average = sum / size;
        cout << "zangvaci tarreri mijin tvabanakany " << average << endl;
    }

    ~Samp() {
        delete[] arr;
    }
};

int main() {
    Samp sample; 

    sample.set();  
    sample.show(); 

    return 0;
}
