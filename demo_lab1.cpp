#include <iostream>
#include "lab1.h"
#include <locale>

namespace A {
    void runDemo() {
        std::setlocale(LC_ALL, "Russian");
        VECTOR v1, v2;

        std::cout << "Введите размер векторов: ";
        std::cin >> v1.n;
        v2.n = v1.n;

        std::cout << "Введите элементы первого вектора:\n";
        for (int i = 0; i < v1.n; ++i) {
            float val; std::cin >> val;
            v1.Set(i, val);
        }

        std::cout << "Введите элементы второго вектора:\n";
        for (int i = 0; i < v2.n; ++i) {
            float val; std::cin >> val;
            v2.Set(i, val);
        }

        std::cout << "Первый вектор: "; v1.Print();
        std::cout << "Второй вектор: "; v2.Print();

        VECTOR sum = v1.Add(v2);
        std::cout << "Сумма: "; sum.Print();
        std::cout << "Норма v1 = " << v1.Norm() << "\n";
        std::cout << "Норма v2 = " << v2.Norm() << "\n";
        std::cout << "Норма суммы = " << sum.Norm() << "\n";
    }
}