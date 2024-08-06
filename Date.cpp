#include "Date.h"

#include <iostream>

Date::Date(int day, int month, int year) {
    setDate(day, month, year);
}

void Date::setDate(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}
bool Date::operator<(const Date& other) const {
    if (year< other.year)
        return true;
    else if (year == other.year && month < other.month)
        return true;
    else if (year == other.year && month == other.month && day < other.day)
        return true;
    else
        return false;
}

int Date::getYear() const {
    return year;
}

void Date::printDate() const {
    std::cout << day << "/" << month << "/" << year << std::endl;
}
bool Date:: operator==(const Date& other) const {
        return (day == other.day && month == other.month && year == other.year);
    }
