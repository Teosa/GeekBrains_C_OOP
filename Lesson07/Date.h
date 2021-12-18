#pragma once
#include <ostream>

using namespace std;

class Date
{
    int day;
    int month;
    int year;
public:
    Date();
    Date(int const day, int const month, int const year);
    
    void setDay(int const day);
    void setMonth(int const month);
    void setYear(int const year);

    int getDay();
    int getMonth();
    int getYear();

    bool operator>(Date& anotherDate);
    bool operator<(Date& anotherDate);

   friend ostream& operator<<(ostream& stream,  Date& date);
};
