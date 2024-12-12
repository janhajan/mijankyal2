// 3.1

#include <iostream>
#define SIZE 10 

using namespace std;

class Samp {
private:
    int arr[SIZE]; 
    int sum;       

public:
    void set() {
        cout << "grel " << SIZE << " amboxj tveri:" << endl;
        for (int i = 0; i < SIZE; ++i) {
            cin >> arr[i];
        }
    }

    void show() {
        sum = 0; 
        cout << "zangvaci tarrery ";
        for (int i = 0; i < SIZE; ++i) {
            if (arr[i] < 0) {
                arr[i] *= arr[i];
            }
            sum += arr[i]; 
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "zangvaci elementneri gumary " << sum << endl;
    }
};

int main() {
    Samp sample; 

    sample.set(); 
    sample.show(); 

    return 0;
}
