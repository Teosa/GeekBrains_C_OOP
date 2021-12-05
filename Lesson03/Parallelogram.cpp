#include "Parallelogram.h"

Parallelogram::Parallelogram(float base, float height) : Figure(), base(base), height(height) { name = "Parallelogram"; }

void Parallelogram::area()
{
    std::cout << name << " area is: " << base*height << std::endl;
}

