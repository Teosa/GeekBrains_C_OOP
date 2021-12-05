#pragma once
#include <string>

using std::string;

class Fruit
{
protected:
    string name;
    string color;
public:
    Fruit(string name, string color);

    string getName() const;
    string getColor() const;
};
