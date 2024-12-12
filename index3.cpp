// 3.4

//matr.h 

#ifndef MATR_H
#define MATR_H

#include <iostream>
using namespace std;

class matr {
    int x, y; 
    int* p;   
public:
    matr(int i, int j);        
    ~matr() { delete[] p; }    
    int& set(int i, int j);    
    int show(int i, int j);  
};
#endif 

// matr.cpp

 #include "matr.h"

matr::matr(int i, int j) {
    x = i; 
    y = j;
    p = new int[x * y]; 
    for (int k = 0; k < x * y; ++k) {
        p[k] = 0;
    }
}

int& matr::set(int i, int j) {
    return p[i * y + j];
}
int matr::show(int i, int j) {
    return p[i * y + j]; 
}

// main.cpp

#include "matr.h"
int main() {
    int size;
    cout << "Введите размерность матрицы: ";
    cin >> size;

    matr m(size, size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == j) {
                m.set(i, j) = 1; 
            } else {
                m.set(i, j) = 0;
            }
        }
    }
 
    cout << "Единичная диагональная матрица:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < size; ++j) {
            cout << m.show(i, j) << " ";
        }
        cout << endl;
    } return 0;}
