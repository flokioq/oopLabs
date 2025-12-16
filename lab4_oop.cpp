#include "lab4_oop.h"
#include <iostream>

using namespace std;

namespace D {

    VECTOR::VECTOR(int n) {
        this->n = n;
        for (int i = 0; i < n; i++)
            A[i] = 0.0f;
    }

    VECTOR::VECTOR(int n, float value) {
        this->n = n;
        for (int i = 0; i < n; i++)
            A[i] = value;
    }

    void VECTOR::Set(int t, float value) {
        if (t >= 0 && t < n)
            A[t] = value;
        else
            cout << "Ошибка: индекс вне диапазона!\n";
    }

    VECTOR VECTOR::Add(VECTOR what) {
        if (what.n != n) {
            cout << "Ошибка: размеры векторов не совпадают!\n";
            return VECTOR();
        }
        VECTOR temp(n);
        for (int i = 0; i < n; i++)
            temp.A[i] = A[i] + what.A[i];
        return temp;
    }

    float VECTOR::Norm() {
        float sum = 0;
        for (int i = 0; i < n; i++)
            sum += A[i] * A[i];
        return sqrt(sum);
    }

    void VECTOR::Print() {
        for (int i = 0; i < n; i++)
            cout << "a(" << i << ")=" << A[i] << " ";
        cout << endl;
    }

    void VECTOR::Input() {
        cout << "Введите размер вектора: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "A[" << i << "] = ";
            cin >> A[i];
        }
    }

    VECTOR::~VECTOR() {}


    // ===== VECTOR_EXT =====

    VECTOR_EXT::VECTOR_EXT(int n) : VECTOR(n) {}
    VECTOR_EXT::VECTOR_EXT(int n, float value) : VECTOR(n, value) {}

    void VECTOR_EXT::Set(int t, float value) {
        cout << "[VECTOR_EXT] Установка A[" << t << "]=" << value << endl;
        VECTOR::Set(t, value);
    }

    VECTOR VECTOR_EXT::Add(VECTOR what) {
        cout << "[VECTOR_EXT] Выполняется сложение векторов" << endl;
        return VECTOR::Add(what);
    }

    float VECTOR_EXT::Norm() {
        float norm = VECTOR::Norm();
        cout << "[VECTOR_EXT] Норма вектора = " << norm << endl;
        return norm;
    }

    void VECTOR_EXT::Print() {
        cout << "[VECTOR_EXT] Компоненты вектора: ";
        VECTOR::Print();
    }

    void VECTOR_EXT::Input() {
        cout << "[VECTOR_EXT] Введите вектор вручную:" << endl;
        VECTOR::Input();
    }

} // namespace D
