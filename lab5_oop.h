#ifndef LAB5_OOP_H
#define LAB5_OOP_H

#include <iostream>

namespace E {
    void runDemo();
    class VECTOR {
    public:
        VECTOR(int n);
        VECTOR(int n, float value);

        VECTOR(const VECTOR& other);
        VECTOR& operator=(const VECTOR& other);

        void Set(int index, float value);
        VECTOR Add(const VECTOR& what) const;
        float Norm() const;
        void Print() const;
        void Input();

        VECTOR operator+(const VECTOR& other) const;
        VECTOR operator-(const VECTOR& other) const; // объявлен, но не реализован

        friend std::ostream& operator<<(std::ostream& os, const VECTOR& v);
        friend std::istream& operator>>(std::istream& is, VECTOR& v);

    private:
        int n;
        float A[200];
    };

} // namespace E

#endif
