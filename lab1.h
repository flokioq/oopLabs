#ifndef LAB1_H
#define LAB1_H

#include <iostream>
#include <cmath>
using namespace std;

namespace A {

    class VECTOR {
    public:

        void Set(int t, float value);  // 3. Изменение компоненты
        VECTOR Add(VECTOR what);       // 6. Сложение
        float Norm();                  // 10. Вычисление нормы
        void Print();                  // 12. Вывод
        int n;          // размер вектора
        float A[200];   // массив элементов
    };
    void runDemo();
}
#endif
