#include "TimeClass.h"

// Конструктор по умолчанию
TimeClass::TimeClass() : hours(0), minutes(0) {}

// Конструктор инициализации
TimeClass::TimeClass(int h, int m) : hours(h), minutes(m) {}

// Конструктор копирования
TimeClass::TimeClass(const TimeClass& other) : hours(other.hours), minutes(other.minutes) {}

// Деструктор
TimeClass::~TimeClass() {
    std::cout << "TimeClass destroyed" << std::endl;
}

// Перегрузка оператора присваивания
TimeClass& TimeClass::operator=(const TimeClass& other) {
    if (this == &other) {
        return *this;
    }
    hours = other.hours;
    minutes = other.minutes;
    return *this;
}

// Перегрузка оператора сравнения
bool TimeClass::operator==(const TimeClass& other) const {
    return (hours == other.hours && minutes == other.minutes);
}

// Функция обработки данных
int TimeClass::totalMinutes() const {
    return hours * 60 + minutes;
}

// Функция формирования строки об объекте
std::string TimeClass::toString() const {
    return "Hours: " + std::to_string(hours) + ", Minutes: " + std::to_string(minutes);
}

// Дружественные функции для перегрузки операторов ввода и вывода
std::ostream& operator<<(std::ostream& os, const TimeClass& obj) {
    os << "Hours: " << obj.hours << ", Minutes: " << obj.minutes;
    return os;
}

std::istream& operator>>(std::istream& is, TimeClass& obj) {
    std::cout << "Enter hours: ";
    is >> obj.hours;
    std::cout << "Enter minutes: ";
    is >> obj.minutes;
    return is;
}
