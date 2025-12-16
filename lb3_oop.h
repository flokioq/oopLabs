#ifndef LB3_OOP
#define LB3_OOP

#include <iostream>

namespace C {
    void runDemo();
    class Sequence {
    private:
        double* arr;    // динамический массив чисел
        int N;          // количество элементов

    public:
        Sequence();                     // конструктор
        ~Sequence();                    // деструктор

        void input();                   // ввод элементов
        void print() const;             // вывод элементов
        int getSize() const;            // получение размера

        int findOutsideInterval(double A, double B, int*& indexes) const;
        void clear();                   // очистить массив
    };

} // namespace C

#endif
