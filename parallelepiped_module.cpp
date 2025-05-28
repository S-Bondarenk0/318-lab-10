#include <iostream>
#include "parallelepiped_module.h"

bool Parallelepiped::InputAndValidate() {
    std::cout << "Введіть довжини a, b, c: ";
    std::cin >> a >> b >> c;
    return a > 0 && b > 0 && c > 0;
}

void Parallelepiped::Compute() {
    volume = a * b * c;
    surfaceArea = 2 * (a * b + b * c + a * c);
}

void Parallelepiped::Print() {
    std::cout << "Об’єм: " << volume << "\nПлоща поверхні: " << surfaceArea << "\n";
}
