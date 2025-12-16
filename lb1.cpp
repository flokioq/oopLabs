#include "lab1.h"
using namespace std;
namespace A {

    // Метод 3: изменить компоненту
    void VECTOR::Set(int t, float value) {
        if (t >= 0 && t < n)
            A[t] = value;
        else
            cout << "Ошибка: индекс вне диапазона\n";
    }

    // Метод 6: сложение
    VECTOR VECTOR::Add(VECTOR what) {
        VECTOR result;
        result.n = n; // результат имеет тот же размер
        if (n != what.n) {
            cout << "Ошибка: разные размеры векторов\n";
            return result;
        }
        for (int i = 0; i < n; ++i)
            result.A[i] = A[i] + what.A[i];
        return result;
    }

    // Метод 10: норма вектора
    float VECTOR::Norm() {
        float sum = 0;
        for (int i = 0; i < n; ++i)
            sum += A[i] * A[i];
        return sqrt(sum);
    }

    // Метод 12: вывод вектора
    void VECTOR::Print() {
        for (int i = 0; i < n; ++i)
            cout << "a(" << i << ") = " << A[i] << " ";
        cout << endl;
    }

}
