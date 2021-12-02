#include "Fruit.h"

Fruit::Fruit(string name, string color) : name(name), color(color) {}

string Fruit::getName() const
{
    return name;
}

string Fruit::getColor() const
{
    return color;
}


