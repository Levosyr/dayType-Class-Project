#include "dayType.h"
#include <iostream>

const std::string dayType::daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

dayType::dayType() {
    day = daysOfWeek[0]; // Default to Sunday
}

dayType::dayType(std::string initialDay) {
    setDay(initialDay);
}

void dayType::setDay(std::string newDay) {
    day = newDay;
}

void dayType::printDay() {
    std::cout << day << std::endl;
}

std::string dayType::getDay() {
    return day;
}

std::string dayType::getNextDay() {
    int index = 0;
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            index = i;
            break;
        }
    }
    return daysOfWeek[(index + 1) % 7];
}

std::string dayType::getPrevDay() {
    int index = 0;
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            index = i;
            break;
        }
    }
    return daysOfWeek[(index + 6) % 7];
}

void dayType::addDays(int numDays) {
    int index = 0;
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            index = i;
            break;
        }
    }
    index = (index + numDays) % 7;
    if (index < 0) index += 7;
    day = daysOfWeek[index];
}