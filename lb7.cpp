#include "lb7.h"
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

namespace G {

    // ---- Конструкторы ----
    VECTOR::VECTOR(int n) : n(n) {
        for (int i = 0; i < n; i++)
            A[i] = 0;
    }

    VECTOR::VECTOR(int n, float value) : n(n) {
        for (int i = 0; i < n; i++)
            A[i] = value;
    }

    // ---- №3 Set ----
    void VECTOR::Set(int t, float value) {
        if (t >= 0 && t < n)
            A[t] = value;
    }

    // ---- №6 Add ----
    VECTOR VECTOR::Add(VECTOR what) {
        VECTOR r(n);
        for (int i = 0; i < n; i++)
            r.A[i] = A[i] + what.A[i];
        return r;
    }

    // ---- №10 Norm ----
    float VECTOR::Norm() {
        float s = 0;
        for (int i = 0; i < n; i++)
            s += A[i] * A[i];
        return sqrt(s);
    }

    // ---- №12 Print ----
    void VECTOR::Print() {
        for (int i = 0; i < n; i++)
            cout << "a(" << i << ")=" << A[i] << endl;
    }

    // ---- Перегрузка операторов ----
    ostream& operator<<(ostream& out, const VECTOR& v) {
        for (int i = 0; i < v.n; i++)
            out << v.A[i] << " ";
        return out;
    }

    istream& operator>>(istream& in, VECTOR& v) {
        for (int i = 0; i < v.n; i++)
            in >> v.A[i];
        return in;
    }

    // ===================================================================
    //  formattedOutput()
    // ===================================================================
    void formattedOutput(char c1, int i1, char c2, int i2, float f) {
        ofstream fout("output.txt");

        cout << "\n--- Результат ---\n";
        fout << "--- Результат ---\n";

        cout << hex << uppercase;
        fout << hex << uppercase;

        cout << setw(9) << i2
            << setw(9) << i1
            << setw(9) << c2;

        fout << setw(9) << i2
            << setw(9) << i1
            << setw(9) << c2;

        cout << setw(9) << fixed << setprecision(1) << f;
        fout << setw(9) << fixed << setprecision(1) << f;

        cout << setw(9) << c1;
        fout << setw(9) << c1;

        cout << dec << endl;
        fout << dec << endl;

        fout.close();
    }

} // namespace G
