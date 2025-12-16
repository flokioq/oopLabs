#include <iostream>
#include <complex>
#include "lb6_oop.h"

using namespace std;

namespace F {

    void runDemo() {
        setlocale(LC_ALL, "Russian");

        int choice;

        do {
            cout << "\n========== М Е Н Ю ==========\n";
            cout << "1. Работа с целыми числами\n";
            cout << "2. Работа с комплексными числами\n";
            cout << "0. Выход\n";
            cout << "Выберите пункт: ";
            cin >> choice;

            if (choice == 1) {
                int n;
                cout << "Введите количество целых элементов: ";
                cin >> n;

                int* arr = new int[n];
                cout << "Введите " << n << " целых чисел:\n";
                for (int i = 0; i < n; i++)
                    cin >> arr[i];

                NumberSequence<int> seq(arr, n);

                double low, high;
                cout << "Введите нижнюю границу диапазона: ";
                cin >> low;
                cout << "Введите верхнюю границу диапазона: ";
                cin >> high;

                cout << "Процент элементов в диапазоне [" << low << ", " << high << "]: "
                    << seq.percentageInRange(low, high) << "%\n";

                delete[] arr;
            }
            else if (choice == 2) {
                int n;
                cout << "Введите количество комплексных чисел: ";
                cin >> n;

                complex<double>* arr = new complex<double>[n];

                cout << "Введите комплексные числа (действительная и мнимая части):\n";
                for (int i = 0; i < n; i++) {
                    double re, im;
                    cout << i + 1 << ": ";
                    cin >> re >> im;
                    arr[i] = complex<double>(re, im);
                }

                NumberSequence<complex<double>> seq(arr, n);

                double low, high;
                cout << "Введите нижнюю границу диапазона (по действительной части): ";
                cin >> low;
                cout << "Введите верхнюю границу диапазона (по действительной части): ";
                cin >> high;

                cout << "Процент элементов, действительная часть которых в диапазоне ["
                    << low << ", " << high << "]: "
                    << seq.percentageInRange(low, high) << "%\n";

                delete[] arr;
            }
            else if (choice != 0) {
                cout << "Неверный выбор. Повторите!\n";
            }

        } while (choice != 0);

        cout << "Выход из программы...\n";
    }

} // namespace F