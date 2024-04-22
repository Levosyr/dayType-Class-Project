// dayType.h

#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

class dayType {
private:
    std::string day;
    static const std::string DAYS[7];

public:
    dayType();
    dayType(const std::string& day);
    void setDay(const std::string& day);
    std::string getDay() const;
    void printDay() const;
    dayType previousDay() const;
    dayType nextDay() const;
    dayType addDays(int numDays) const;
};

#endif#pragma once
