#include <iostream>
#include "boolean_module.h"

bool BoolCheck::InputAndValidate() {
    std::cout << "Введіть два цілі числа A і B: ";
    std::cin >> A >> B;
    return true;
}

void BoolCheck::Compute() {
    result = (A % 2 != 0) && (B % 2 != 0);
}

void BoolCheck::Print() {
    std::cout << "Кожне з чисел A і B непарне: " << (result ? "істинно" : "хибно") << "\n";
}
