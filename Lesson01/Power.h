#pragma once
class Power
{
private:
    int value = 1;
    int power = 1;
public:
    void setVariables(int const inputValue, int const inputPower);
    void calculate();
};
