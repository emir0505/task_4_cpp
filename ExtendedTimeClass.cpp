#include "ExtendedTimeClass.h"

// Конструктор по умолчанию
ExtendedTimeClass::ExtendedTimeClass() : TimeClass(), operationDuration(0) {}

// Конструктор инициализации
ExtendedTimeClass::ExtendedTimeClass(int h, int m, int opDuration) : TimeClass(h, m), operationDuration(opDuration) {}

// Конструктор копирования
ExtendedTimeClass::ExtendedTimeClass(const ExtendedTimeClass& other) : TimeClass(other), operationDuration(other.operationDuration) {}

// Деструктор
ExtendedTimeClass::~ExtendedTimeClass() {
    std::cout << "ExtendedTimeClass destroyed" << std::endl;
}

// Перегрузка оператора присваивания
ExtendedTimeClass& ExtendedTimeClass::operator=(const ExtendedTimeClass& other) {
    if (this == &other) {
        return *this;
    }
    TimeClass::operator=(other);
    operationDuration = other.operationDuration;
    return *this;
}

// Функция вычисления количества операций
int ExtendedTimeClass::calculateOperations() const {
    return totalMinutes() / operationDuration;
}

// Функция формирования строки об объекте
std::string ExtendedTimeClass::toString() const {
    return TimeClass::toString() + ", Operation Duration: " + std::to_string(operationDuration);
}

// Дружественные функции для перегрузки операторов ввода и вывода
std::ostream& operator<<(std::ostream& os, const ExtendedTimeClass& obj) {
    os << obj.toString();
    return os;
}

std::istream& operator>>(std::istream& is, ExtendedTimeClass& obj) {
    is >> static_cast<TimeClass&>(obj);
    std::cout << "Enter operation duration: ";
    is >> obj.operationDuration;
    return is;
}
