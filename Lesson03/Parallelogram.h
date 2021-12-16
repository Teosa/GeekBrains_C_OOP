#pragma once
#include "Figure.h"

class Parallelogram : public Figure
{
protected:
    float base;
    float height;
public:
    Parallelogram(float base, float height);
    ~Parallelogram() override = default;
    void area() override;
};
