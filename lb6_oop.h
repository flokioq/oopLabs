#ifndef LB6_OOP_H
#define LB6_OOP_H

#include <complex>

namespace F {
    void runDemo();
    template<typename T>
    class NumberSequence {
    private:
        T* data;
        int size;

        double extractReal(const T& value);

    public:
        NumberSequence(const T* arr, int n);
        ~NumberSequence();

        double percentageInRange(double low, double high);
    };

    // явная специализация
    template<>
    double NumberSequence<std::complex<double>>::extractReal(
        const std::complex<double>& value);

} // namespace F

#endif
