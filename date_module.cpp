#include "date_module.h"

bool TDate::LeapYear() {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int TDate::CheckDate() {
    if (month < 1 || month > 12) return 1; // неправильний місяць

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (LeapYear()) daysInMonth[1] = 29;

    if (day < 1 || day > daysInMonth[month - 1]) return 2; // неправильний день

    return 0; // дата правильна
}
