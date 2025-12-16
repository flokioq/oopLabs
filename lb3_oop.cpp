#include <iostream>
#include "lb3_oop.h"

using namespace std;

namespace C {

    // Конструктор
    Sequence::Sequence() {
        arr = nullptr;
        N = 0;
    }

    // Деструктор
    Sequence::~Sequence() {
        clear();
    }

    // Ввод массива
    void Sequence::input() {
        clear();

        cout << "Введите количество элементов N: ";
        cin >> N;

        if (N <= 0) {
            cout << "Некорректное значение N!\n";
            N = 0;
            return;
        }

        arr = new double[N];
        cout << "Введите элементы последовательности:\n";
        for (int i = 0; i < N; i++) {
            cout << "arr[" << i + 1 << "] = ";
            cin >> arr[i];
        }
    }

    // Вывод массива
    void Sequence::print() const {
        if (!arr || N == 0) {
            cout << "Последовательность пуста!\n";
            return;
        }

        cout << "Последовательность: ";
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Получить размер
    int Sequence::getSize() const {
        return N;
    }

    // Поиск элементов вне интервала [A, B]
    int Sequence::findOutsideInterval(double A, double B, int*& indexes) const {
        if (!arr || N == 0) {
            cout << "Сначала введите последовательность!\n";
            return 0;
        }

        if (A > B) swap(A, B);

        indexes = new int[N];
        int count = 0;

        for (int i = 0; i < N; i++) {
            if (arr[i] < A || arr[i] > B) {
                indexes[count++] = i + 1;
            }
        }

        return count;
    }

    // Очистка памяти
    void Sequence::clear() {
        if (arr) {
            delete[] arr;
            arr = nullptr;
            N = 0;
        }
    }

} // namespace C
