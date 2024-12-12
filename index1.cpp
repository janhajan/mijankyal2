// 3.2
#include <iostream>
#define SIZE 10

using namespace std;
class Samp {
private:
    int arr[SIZE]; 
    int sum;       
public:
  
    void set() {
        cout << "grel " << SIZE << " amboxj tveri" << endl;
        for (int i = 0; i < SIZE; ++i) {
            cin >> arr[i];
        }
    }
    void show() {
        sum = 0;
        cout << "tarreri elementnery ";
        for (int i = 0; i < SIZE; ++i) {
            if (arr[i] < 0) {
                arr[i] *= arr[i]; 
            }
            sum += arr[i]; 
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "zangvaci tarreri gumary " << sum << endl;
    }
};

int main() {
    Samp* sample = new Samp(); 
    sample->set();  
    sample->show(); 
    delete sample; 
    return 0;
}
