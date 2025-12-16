// lab5_demo.cpp
#include <iostream>
#include "lab5_oop.h"

using namespace std;

namespace E {

    void runDemo() {
        setlocale(LC_ALL, "Russian");
        int n;

        cout << "Введите размер векторов: ";
        cin >> n;

        VECTOR v1(n);
        VECTOR v2(n);

        int choice;

        do {
            cout << "\n===== МЕНЮ =====\n";
            cout << "1. Ввести вектор v1\n";
            cout << "2. Ввести вектор v2\n";
            cout << "3. Показать вектор v1\n";
            cout << "4. Показать вектор v2\n";
            cout << "5. Сложить v1 + v2\n";
            cout << "6. Показать нормы v1 и v2\n";
            cout << "0. Выход\n";
            cout << "Ваш выбор: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "Введите v1:\n";
                cin >> v1;
                break;

            case 2:
                cout << "Введите v2:\n";
                cin >> v2;
                break;

            case 3:
                cout << "v1 = " << v1 << endl;
                break;

            case 4:
                cout << "v2 = " << v2 << endl;
                break;

            case 5: {
                VECTOR sum = v1 + v2;
                cout << "v1 + v2 = " << sum << endl;
                break;
            }

            case 6:
                cout << "Норма v1 = " << v1.Norm() << endl;
                cout << "Норма v2 = " << v2.Norm() << endl;
                break;

            case 0:
                cout << "Выход из программы..." << endl;
                break;

            default:
                cout << "Неверный пункт меню!" << endl;
            }

        } while (choice != 0);
    }

} // namespace E