// dayType.cpp

#include "dayType.h"
#include <iostream>

const std::string dayType::DAYS[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

dayType::dayType() : day("Sunday") {}

dayType::dayType(const std::string& day) {
    this->setDay(day);
}

void dayType::setDay(const std::string& day) {
    for (int i = 0; i < 7; i++) {
        if (DAYS[i] == day) {
            this->day = day;
            return;
        }
    }
    std::cerr << "Invalid day: " << day << std::endl;
}

std::string dayType::getDay() const {
    return this->day;
}

void dayType::printDay() const {
    std::cout << this->day << std::endl;
}

dayType dayType::previousDay() const {
    int index = (std::find(DAYS, DAYS + 7, this->day) - DAYS);
    return dayType(DAYS[(index + 6) % 7]);
}

dayType dayType::nextDay() const {
    int index = (std::find(DAYS, DAYS + 7, this->day) - DAYS);
    return dayType(DAYS[(index + 1) % 7]);
}

dayType dayType::addDays(int numDays) const {
    int index = (std::find(DAYS, DAYS + 7, this->day) - DAYS);
    return dayType(DAYS[(index + numDays) % 7]);
}