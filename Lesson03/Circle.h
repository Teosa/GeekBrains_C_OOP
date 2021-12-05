#pragma once
#include "Figure.h"

class Circle : public Figure
{
    static float PI;
    float radius;
public:
    Circle(float radius);
    ~Circle() override = default;
    void area() override;
};
