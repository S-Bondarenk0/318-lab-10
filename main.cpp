#include <iostream>
#include "date_module.h"
#include "parallelepiped_module.h"
#include "boolean_module.h"

int main() {
    int choice;
    do {
        std::cout << "\nМеню:\n";
        std::cout << "1. Перевірка дати\n";
        std::cout << "2. Паралелепіпед\n";
        std::cout << "3. Перевірка непарності\n";
        std::cout << "0. Вихід\n";
        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                TDate date;
                std::cout << "Введіть день, місяць, рік: ";
                std::cin >> date.day >> date.month >> date.year;
                int res = date.CheckDate();
                std::cout << "Результат перевірки дати: " << res << "\n";
                std::cout << "Чи рік високосний: " << (date.LeapYear() ? "так" : "ні") << "\n";
                break;
            }
            case 2: {
                Parallelepiped p;
                if (p.InputAndValidate()) {
                    p.Compute();
                    p.Print();
                } else {
                    std::cout << "Невірні дані!" << std::endl;
                }
                break;
            }
            case 3: {
                BoolCheck b;
                if (b.InputAndValidate()) {
                    b.Compute();
                    b.Print();
                }
                break;
            }
        }
    } while (choice != 0);

    return 0;
}
