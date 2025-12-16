#include <iostream>
#include <locale>

// Подключаем заголовочные файлы каждой лабы
#include "lab1.h"       // namespace A
#include "lb2.h"        // namespace B
#include "lb3_oop.h"    // namespace C
#include "lab4_oop.h"   // namespace D
#include "lab5_oop.h"   // namespace E
#include "lb6_oop.h"    // namespace F
#include "lb7.h"        // namespace G

int main() {
    std::setlocale(LC_ALL, "Russian");

    int choice;
    while (true) {
        std::cout << "\n=========================================\n";
        std::cout << "   ЛАБОРАТОРНЫЕ РАБОТЫ ПО ООП (C++)\n";
        std::cout << "=========================================\n";
        std::cout << "1. Лаба 1 — Вектор (простые операции)\n";
        std::cout << "2. Лаба 2 — Список символов (обратный вывод)\n";
        std::cout << "3. Лаба 3 — Последовательность (вне интервала)\n";
        std::cout << "4. Лаба 4 — Наследование (VECTOR / VECTOR_EXT)\n";
        std::cout << "5. Лаба 5 — Перегрузка операторов (вектор)\n";
        std::cout << "6. Лаба 6 — Шаблоны (целые и комплексные числа)\n";
        std::cout << "7. Лаба 7 — Файловый вывод и VECTOR с перегрузкой\n";
        std::cout << "0. Выход\n";
        std::cout << "-----------------------------------------\n";
        std::cout << "Ваш выбор (0–7): ";
        std::cin >> choice;

        // Очищаем поток ввода (на случай, если ввели не число)
        std::cin.clear();
        std::cin.ignore(10000, '\n');

        switch (choice) {
        case 1: A::runDemo(); break;
        case 2: B::runDemo(); break;
        case 3: C::runDemo(); break;
        case 4: D::runDemo(); break;
        case 5: E::runDemo(); break;
        case 6: F::runDemo(); break;
        case 7: G::runDemo(); break;
        case 0:
            std::cout << "\nВыход. До свидания!\n";
            return 0;
        default:
            std::cout << "\n❌ Неверный выбор. Введите число от 0 до 7.\n";
            break; // возвращаемся в меню
        }

        // Необязательно: пауза перед возвратом в меню
        std::cout << "\nНажмите Enter, чтобы вернуться в меню...";
        std::cin.get();
    }

    return 0;
}