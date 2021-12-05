#include "Person.h"

Person::Person(string const name, int const age, Gender const gender, float const weight) :
    name(name), age(age), gender(gender), weight(weight)
{
}

void Person::setAge(int const age)
{
    this->age = age;
}

void Person::setName(string const name)
{
    this->name = name;
}

void Person::setWeight(float const weight)
{
    this->weight = weight;
}

string Person::stringifyGender() const
{
    switch (gender)
    {
    case MAN: return "MAN";
    case WOMEN: return "WOMEN";
    default: return "UNKNOWN";
    }
}
