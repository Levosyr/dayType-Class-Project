#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

class dayType {
private:
    std::string day;
    static const std::string daysOfWeek[7];

public:
    dayType();
    dayType(std::string initialDay);

    void setDay(std::string newDay);
    void printDay();
    std::string getDay();
    std::string getNextDay();
    std::string getPrevDay();
    void addDays(int numDays);
};

#endif // DAYTYPE_H#pragma once
