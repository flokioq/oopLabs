// lab4_demo.cpp
#include <iostream>
#include "lab4_oop.h"

using namespace std;

namespace D {

    void runDemo() {
        setlocale(LC_ALL, "Russian");

        VECTOR v1;
        VECTOR_EXT v2;
        bool hasV1 = false, hasV2 = false;

        int choice;
        do {
            cout << "\n========== МЕНЮ ==========\n";
            cout << "1. Ввести вектор (VECTOR)\n";
            cout << "2. Ввести вектор (VECTOR_EXT)\n";
            cout << "3. Вывести оба вектора\n";
            cout << "4. Изменить элемент вектора\n";
            cout << "5. Вычислить норму вектора\n";
            cout << "6. Сложить векторы (1 + 2)\n";
            cout << "7. Очистить векторы\n";
            cout << "0. Выход\n";
            cout << "==========================\n";
            cout << "Ваш выбор: ";
            cin >> choice;

            switch (choice) {
            case 1:
                v1.Input();
                hasV1 = true;
                break;

            case 2:
                v2.Input();
                hasV2 = true;
                break;

            case 3:
                if (hasV1) v1.Print();
                else cout << "VECTOR не задан.\n";

                if (hasV2) v2.Print();
                else cout << "VECTOR_EXT не задан.\n";
                break;

            case 4: {
                int which, index;
                float value;
                cout << "Какой вектор (1-VECTOR, 2-VECTOR_EXT): ";
                cin >> which;
                cout << "Введите индекс и значение: ";
                cin >> index >> value;

                if (which == 1 && hasV1) v1.Set(index, value);
                else if (which == 2 && hasV2) v2.Set(index, value);
                else cout << "Сначала создайте вектор!\n";
                break;
            }

            case 5:
                if (hasV1) cout << "Норма VECTOR = " << v1.Norm() << endl;
                if (hasV2) cout << "Норма VECTOR_EXT = " << v2.Norm() << endl;
                break;

            case 6:
                if (hasV1 && hasV2 && v1.Size() == v2.Size()) {
                    VECTOR result = v1.Add(v2);
                    result.Print();
                }
                else {
                    cout << "Ошибка сложения!\n";
                }
                break;

            case 7:
                v1 = VECTOR();
                v2 = VECTOR_EXT();
                hasV1 = hasV2 = false;
                cout << "Векторы очищены.\n";
                break;

            case 0:
                cout << "Выход из программы.\n";
                break;

            default:
                cout << "Неверный выбор!\n";
            }

        } while (choice != 0);
    }

} // namespace D