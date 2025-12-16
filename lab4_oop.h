#pragma once
#include <iostream>
#include <cmath>

namespace D {
    void runDemo();
    class VECTOR {
    protected:
        int n;
        float A[200];

    public:
        VECTOR(int n = 0);
        VECTOR(int n, float value);

        // Виртуальные функции
        virtual void Set(int t, float value);
        virtual VECTOR Add(VECTOR what);
        virtual float Norm();
        virtual void Print();
        virtual void Input();

        virtual int Size() const { return n; }

        virtual ~VECTOR();
    };

    class VECTOR_EXT : public VECTOR {
    public:
        VECTOR_EXT(int n = 0);
        VECTOR_EXT(int n, float value);

        void Set(int t, float value) override;
        VECTOR Add(VECTOR what) override;
        float Norm() override;
        void Print() override;
        void Input() override;
    };

} // namespace D
