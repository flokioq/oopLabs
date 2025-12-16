#include <iostream>
#include <string>
#include "lb2.h"

using namespace std;

namespace B {

    void runDemo() {
        setlocale(LC_ALL, "Russian");

        LinkedList list;
        string input;
        int choice;

        do {
            cout << "\n====== МЕНЮ ======\n";
            cout << "1. Ввести строку\n";
            cout << "2. Вывести строку в обратном порядке\n";
            cout << "3. Очистить список\n";
            cout << "4. Выход\n";
            cout << "Выберите пункт: ";
            cin >> choice;
            cin.ignore();

            switch (choice) {
            case 1:
                cout << "Введите строку: ";
                getline(cin, input);
                list.inputString(input);
                cout << "Строка сохранена в списке.\n";
                break;

            case 2:
                cout << "Строка в обратном порядке: ";
                list.printReversed();
                break;

            case 3:
                list.clear();
                cout << "Список очищен.\n";
                break;

            case 4:
                cout << "Выход из программы...\n";
                break;

            default:
                cout << "Неверный выбор. Повторите ввод.\n";
            }

        } while (choice != 4);
    }

} // namespace B