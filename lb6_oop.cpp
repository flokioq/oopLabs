#include "lb6_oop.h"

namespace F {

    template<typename T>
    NumberSequence<T>::NumberSequence(const T* arr, int n) : size(n) {
        data = new T[size];
        for (int i = 0; i < size; ++i)
            data[i] = arr[i];
    }

    template<typename T>
    NumberSequence<T>::~NumberSequence() {
        delete[] data;
    }

    template<typename T>
    double NumberSequence<T>::extractReal(const T& value) {
        return value;
    }

    // специализация для complex<double>
    template<>
    double NumberSequence<std::complex<double>>::extractReal(
        const std::complex<double>& value) {
        return value.real();
    }

    template<typename T>
    double NumberSequence<T>::percentageInRange(double low, double high) {
        int count = 0;
        for (int i = 0; i < size; ++i) {
            double val = extractReal(data[i]);
            if (val >= low && val <= high)
                count++;
        }
        return (size == 0) ? 0 : (100.0 * count / size);
    }

    // явная инстанциация шаблонов
    template class NumberSequence<int>;
    template class NumberSequence<std::complex<double>>;

} // namespace F
