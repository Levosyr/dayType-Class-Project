#include <iostream>
#include "dayType.h"

int main() {
    std::cout << "Creating day object using default constructor: ";
    dayType day1;
    day1.printDay(); // Output: Sunday

    std::cout << "Previous day: ";
    std::cout << day1.getPrevDay() << std::endl; // Output: Saturday

    std::cout << "Next day: ";
    std::cout << day1.getNextDay() << std::endl; // Output: Monday

    std::cout << "Creating day object using constructor with parameters: ";
    dayType day2("Monday");
    day2.printDay(); // Output: Monday

    std::cout << "Get day: ";
    std::cout << day2.getDay() << std::endl; // Output: Monday

    std::cout << "Adding 3 days: ";
    day2.addDays(3);
    day2.printDay(); // Output: Thursday

    std::cout << "Adding 30 days: ";
    day2.addDays(30);
    day2.printDay(); // Output: Saturday

    std::cout << "Adding 365 days: ";
    day2.addDays(365);
    day2.printDay(); // Output: Sunday

    return 0;
}