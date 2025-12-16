#include "lab5_oop.h"
#include <cmath>
#include <iostream>

using namespace std;

namespace E {

    VECTOR::VECTOR(int n) : n(n) {
        for (int i = 0; i < n; i++)
            A[i] = 0;
    }

    VECTOR::VECTOR(int n, float value) : n(n) {
        for (int i = 0; i < n; i++)
            A[i] = value;
    }

    VECTOR::VECTOR(const VECTOR& other) : n(other.n) {
        for (int i = 0; i < n; i++)
            A[i] = other.A[i];
    }

    VECTOR& VECTOR::operator=(const VECTOR& other) {
        if (this != &other) {
            n = other.n;
            for (int i = 0; i < n; i++)
                A[i] = other.A[i];
        }
        return *this;
    }

    void VECTOR::Set(int index, float value) {
        if (index >= 0 && index < n)
            A[index] = value;
    }

    VECTOR VECTOR::Add(const VECTOR& what) const {
        VECTOR r(n);
        for (int i = 0; i < n; i++)
            r.A[i] = A[i] + what.A[i];
        return r;
    }

    float VECTOR::Norm() const {
        float sum = 0;
        for (int i = 0; i < n; i++)
            sum += A[i] * A[i];
        return sqrt(sum);
    }

    void VECTOR::Print() const {
        for (int i = 0; i < n; i++)
            cout << "a(" << i << ")=" << A[i] << " ";
        cout << endl;
    }

    void VECTOR::Input() {
        cout << "Введите " << n << " компонентов вектора:\n";
        for (int i = 0; i < n; i++) {
            cout << "a(" << i << ") = ";
            cin >> A[i];
        }
    }

    // --- Операторы ---
    VECTOR VECTOR::operator+(const VECTOR& other) const {
        return Add(other);
    }

    ostream& operator<<(ostream& os, const VECTOR& v) {
        for (int i = 0; i < v.n; i++)
            os << "a(" << i << ")=" << v.A[i] << " ";
        return os;
    }

    istream& operator>>(istream& is, VECTOR& v) {
        for (int i = 0; i < v.n; i++) {
            cout << "a(" << i << ") = ";
            is >> v.A[i];
        }
        return is;
    }

} // namespace E
