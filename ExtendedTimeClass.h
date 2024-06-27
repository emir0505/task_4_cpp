#ifndef EXTENDEDTIMECLASS_H
#define EXTENDEDTIMECLASS_H

#include "TimeClass.h"
#include <iostream>
#include <string>

class ExtendedTimeClass : public TimeClass {
private:
    int operationDuration;

public:
    // Конструктор по умолчанию
    ExtendedTimeClass();

    // Конструктор инициализации
    ExtendedTimeClass(int h, int m, int opDuration);

    // Конструктор копирования
    ExtendedTimeClass(const ExtendedTimeClass& other);

    // Деструктор
    ~ExtendedTimeClass();

    // Перегрузка оператора присваивания
    ExtendedTimeClass& operator=(const ExtendedTimeClass& other);

    // Функция вычисления количества операций
    int calculateOperations() const;

    // Функция формирования строки об объекте
    std::string toString() const override;

    // Дружественные функции для перегрузки операторов ввода и вывода
    friend std::ostream& operator<<(std::ostream& os, const ExtendedTimeClass& obj);
    friend std::istream& operator>>(std::istream& is, ExtendedTimeClass& obj);
};

#endif // EXTENDEDTIMECLASS_H
