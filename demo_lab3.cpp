#include <iostream>
#include "lb3_oop.h"

using namespace std;

namespace C {

    void runDemo() {
        setlocale(LC_ALL, "Russian");

        Sequence seq;
        int choice;
        int* indexes = nullptr;

        do {
            cout << "\n===== МЕНЮ =====\n";
            cout << "1. Ввести последовательность\n";
            cout << "2. Показать последовательность\n";
            cout << "3. Найти элементы вне интервала [A, B]\n";
            cout << "0. Выход\n";
            cout << "Ваш выбор: ";
            cin >> choice;

            switch (choice) {
            case 1:
                seq.input();
                break;

            case 2:
                seq.print();
                break;

            case 3: {
                if (seq.getSize() == 0) {
                    cout << "Сначала введите последовательность!\n";
                    break;
                }

                double A, B;
                cout << "Введите границы интервала [A, B]: ";
                cin >> A >> B;

                int count = seq.findOutsideInterval(A, B, indexes);

                cout << "Количество чисел вне интервала [" << A << ", " << B << "]: "
                    << count << endl;

                if (count > 0) {
                    cout << "Их порядковые номера: ";
                    for (int i = 0; i < count; i++)
                        cout << indexes[i] << " ";
                    cout << endl;
                }

                delete[] indexes;
                indexes = nullptr; // безопасность
                break;
            }

            case 0:
                cout << "Выход из программы.\n";
                break;

            default:
                cout << "Неверный выбор! Попробуйте снова.\n";
            }

        } while (choice != 0);
    }

} // namespace C
