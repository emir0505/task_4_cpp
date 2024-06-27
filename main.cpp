#include <iostream>
#include "ExtendedTimeClass.h"

int main() {
    // Создание объекта TimeClass
    TimeClass t1(2, 30);
    std::cout << "TimeClass t1: " << t1 << std::endl;
    std::cout << "Total minutes in t1: " << t1.totalMinutes() << std::endl;

    TimeClass t2;
    std::cout << "Enter details for TimeClass t2: " << std::endl;
    std::cin >> t2;
    std::cout << "TimeClass t2: " << t2 << std::endl;
    std::cout << "Total minutes in t2: " << t2.totalMinutes() << std::endl;

    // Создание объекта ExtendedTimeClass
    ExtendedTimeClass et1(1, 45, 30);
    std::cout << "ExtendedTimeClass et1: " << et1 << std::endl;
    std::cout << "Operations in et1: " << et1.calculateOperations() << std::endl;

    ExtendedTimeClass et2;
    et2 = et1;
    std::cout << "ExtendedTimeClass et2 (copy of et1): " << et2 << std::endl;

    return 0;
}
