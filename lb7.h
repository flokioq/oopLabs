#ifndef LB7_H
#define LB7_H

#include <iostream>

namespace G {
    void runDemo();
    class VECTOR {
    public:
        VECTOR(int n);              // Инициализация нулями
        VECTOR(int n, float value); // Инициализация одним числом

        void Set(int t, float value); // №3
        VECTOR Add(VECTOR what);      // №6
        float Norm();                 // №10
        void Print();                 // №12

        friend std::ostream& operator<<(std::ostream& out, const VECTOR& v);
        friend std::istream& operator>>(std::istream& in, VECTOR& v);

    private:
        int n;
        float A[200];
    };

    // ----------- Форматированный вывод -----------
    void formattedOutput(char c1, int i1, char c2, int i2, float f);

} // namespace G

#endif
