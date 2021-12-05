#include "Circle.h"

#include <cmath>

float Circle::PI = 3.14;
Circle::Circle(float const radius) : Figure(), radius(radius) { name = "Circle"; }

void Circle::area()
{
    std::cout << name << " area is: " << PI*pow(radius, 2) << std::endl;
}

