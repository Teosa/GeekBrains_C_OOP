#pragma once
#include <iostream>
#include <string>

class Car
{
protected:
    std::string company;
    std::string model;
public:
    Car(std::string company, std::string model);
    ~Car() = default;
};
