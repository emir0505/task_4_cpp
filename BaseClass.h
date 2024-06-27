#ifndef BASECLASS_H
#define BASECLASS_H

#include <string>
#include <iostream>

class BaseClass {
public:
    virtual std::string toString() const = 0; // чисто виртуальная функция для формирования строки
    virtual ~BaseClass() {
        std::cout << "BaseClass destroyed" << std::endl;
    }
};

#endif // BASECLASS_H
