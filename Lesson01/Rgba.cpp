#include "Rgba.h"

#include <iostream>
#include <ostream>

#define TO_STRING static_cast<unsigned> 

Rgba::Rgba()
{
}

Rgba::Rgba(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha) :
    mRed(red), mGreen(green), mBlue(blue), mAlpha(alpha)
{
}

void Rgba::print()
{
    std::cout
        << "Red: " << TO_STRING(mRed) << std::endl
        << "Green: " << TO_STRING(mGreen) << std::endl
        << "Blue: " << TO_STRING(mBlue) << std::endl
        << "Alpha: " << TO_STRING(mAlpha) << std::endl;
}
