#include "Power.h"
#include <iostream>

void Power::setVariables(int const inputValue, int const inputPower)
{
    value = inputValue;
    power = inputPower;
}

void Power::calculate()
{
    std::cout << pow(value, power) << std::endl;
}

