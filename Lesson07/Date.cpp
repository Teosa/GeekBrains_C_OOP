#include "Date.h"

#include <iostream>

template<class T>
int compare(T first, T second)
{
    if(first > second) return 1;
    if(first < second) return -1;
    return 0;
}

Date::Date() : day(1), month(1), year(1990) { }
Date::Date(int const day, int const month, int const year) : day(day), month(month), year(year) { }

void Date::setDay(int const day) { this->day = day; }
void Date::setMonth(int const month) { this->month = month; }
void Date::setYear(int const year) { this->year = year; }

int Date::getDay() { return day; };
int Date::getMonth() { return month; };
int Date::getYear() { return year; };

bool Date::operator<(Date& anotherDate)
{
    if(compare(this->getYear(), anotherDate.getYear()) == -1) return true;
    if(compare(this->getMonth(), anotherDate.getMonth()) == -1) return true;
    if(compare(this->getDay(), anotherDate.getDay()) == -1) return true;

    return false;
}

bool Date::operator>(Date& anotherDate)
{
    if(compare(this->getYear(), anotherDate.getYear()) == 1) return true;
    if(compare(this->getMonth(), anotherDate.getMonth()) == 1) return true;
    if(compare(this->getDay(), anotherDate.getDay()) == 1) return true;

    return false;
}

ostream& operator<<(ostream& stream, Date& date)
{
    return stream << date.getDay() << "-" << date.getMonth() << "-" << date.getYear();
}


