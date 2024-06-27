#ifndef TIMECLASS_H
#define TIMECLASS_H

#include "BaseClass.h"
#include <iostream>
#include <string>

class TimeClass : public BaseClass {
private:
    int hours;
    int minutes;

public:
    // Конструктор по умолчанию
    TimeClass();

    // Конструктор инициализации
    TimeClass(int h, int m);

    // Конструктор копирования
    TimeClass(const TimeClass& other);

    // Деструктор
    ~TimeClass();

    // Перегрузка оператора присваивания
    TimeClass& operator=(const TimeClass& other);

    // Перегрузка оператора сравнения
    bool operator==(const TimeClass& other) const;

    // Функция обработки данных
    int totalMinutes() const;

    // Функция формирования строки об объекте
    std::string toString() const override;

    // Дружественные функции для перегрузки операторов ввода и вывода
    friend std::ostream& operator<<(std::ostream& os, const TimeClass& obj);
    friend std::istream& operator>>(std::istream& is, TimeClass& obj);
};

#endif // TIMECLASS_H
