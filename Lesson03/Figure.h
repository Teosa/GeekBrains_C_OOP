#pragma once
#include <iostream>

class Figure
{
protected:
    std::string name;
public:
    virtual ~Figure() = default;
    virtual void area() = 0;
};
