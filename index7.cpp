// 6.4
#include <iostream>
using namespace std;

class Массив {
private:
    int* данные;   
    int размер;    

public:

    Массив(int р) : размер(р) {
        данные = new int[размер]; 
        for (int i = 0; i < размер; i++) {
            данные[i] = 0; 
        }
    }

    ~Массив() {
        delete[] данные; 
    }

    Массив& operator=(const Массив& другой) {
        if (this == &другой) return *this; 

        delete[] данные; 

        размер = другой.размер; 
        данные = new int[размер]; 
        for (int i = 0; i < размер; i++) {
            данные[i] = другой.данные[i]; 
        }
        return *this;
    }


    int& operator[](int индекс) {
        if (индекс < 0 || индекс >= размер) {
            cout << "Ошибка: выход за пределы массива!" << endl;
            exit(1);
        }
        return данные[индекс]; 
    }

    void показать() const {
        for (int i = 0; i < размер; i++) {
            cout << данные[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Массив массив1(5);
    массив1[0] = 10;
    массив1[1] = 20;
    массив1[2] = 30;

    cout << "Массив 1: ";
    массив1.показать();

    Массив массив2(5);
    массив2 = массив1;

    cout << "Массив 2 после копирования: ";
    массив2.показать();

    массив2[1] = 50;

    cout << "Массив 1 после изменения массива 2: ";
    массив1.показать();
    cout << "Массив 2 после изменения: ";
    массив2.показать();

    return 0;
}
