#ifndef DATE_MODULE_H
#define DATE_MODULE_H

struct TDate {
    int day;
    int month;
    int year;

    bool LeapYear();     // метод для перевірки високосності
    int CheckDate();     // метод для перевірки коректності дати
};

#endif