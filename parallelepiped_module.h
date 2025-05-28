#ifndef PARALLELEPIPED_MODULE_H
#define PARALLELEPIPED_MODULE_H

struct Parallelepiped {
    double a, b, c;        // сторони
    double volume;         // об’єм
    double surfaceArea;    // площа поверхні

    bool InputAndValidate(); // введення та перевірка
    void Compute();          // обчислення
    void Print();            // вивід
};

#endif
