#include <iostream>
#include <iomanip>
#include <fstream>
#include "lb7.h"

using namespace std;

namespace G {

    void runDemo() {
        setlocale(LC_ALL, "ru");

        int cmd;

        while (true) {
            cout << "\n===== М Е Н Ю =====\n";
            cout << "1. Форматированный ввод/вывод (c1 i1 c2 i2 f)\n";
            cout << "2. Работа с VECTOR (методы 3,6,10,12)\n";
            cout << "0. Выход\n";
            cout << "Ваш выбор: ";
            cin >> cmd;

            if (cmd == 0) break;

            if (cmd == 1) {
                char c1, c2;
                int i1, i2;
                float f;

                cout << "Введите данные (c1 i1 c2 i2 f): ";
                cin >> c1 >> i1 >> c2 >> i2 >> f;

                formattedOutput(c1, i1, c2, i2, f);
                cout << "Результат сохранён в файл output.txt\n";
            }

            if (cmd == 2) {
                int n;
                cout << "Введите размер вектора: ";
                cin >> n;

                VECTOR v(n);
                cout << "Введите элементы вектора: ";
                cin >> v;

                cout << "Введённый вектор: " << v << endl;
                cout << "Норма вектора = " << v.Norm() << endl;

                cout << "\nВывод методом Print():\n";
                v.Print();
            }
        }
    }

} // namespace G