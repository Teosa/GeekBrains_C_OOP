#pragma once;

#include <cstdint>;

class Rgba
{
private:
    std::uint8_t mRed = 0;
    std::uint8_t mGreen = 0;
    std::uint8_t mBlue = 0;
    std::uint8_t mAlpha = 255;
public:
    Rgba();
    Rgba(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha);
    void print();
};
