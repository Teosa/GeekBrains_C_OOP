#include "Fraction.h"
#include <numeric>

#include <iostream>

Fraction::Fraction(int numerator, int denominator)
{
    if (denominator == 0)
    {
        // В условии не сказано что именно нужно сделать если знаменатель равен нулю.
        // Так как исключения мы еще не проходили, вывожу ворнинг и заменяю 0 на 1
        std::cout << "WARNING: denominator can't be 0. Replace to 1 performed." << std::endl;
        denominator = 1;
    }

    this->numerator = numerator;
    this->denominator = denominator;
}

Fraction Fraction::operator-()
{
    // Для положительных дробей:
    // Дробь становится отрицательной, если только ее числитель или только ее знаменатель отрицателен.
    // В условии не сказано какую часть меняем приоритетно, поэтому беру знаменатель
    if ((numerator >= 0 && denominator > 0) || (numerator < 0 && denominator < 0))
    {
        // return {numerator, -denominator};
        denominator = -denominator;
        return *this;
    }

    // Для отрицательных дробей:
    // Отрицательная дробь становится положительной, если числитель и знаменатель оба положительны или отрицательны
    // В условии не описано конкретное поведение для отрицательных дробей, поэтому считаю что оба числа должны быть пололжительны
    if (numerator < 0)
    {
        // return {-numerator, denominator};
        numerator = -numerator;
        return *this;
    }

    if (denominator < 0)
    {
        // return {numerator, -denominator};
        denominator = -denominator;
        return *this;
    }

    // Технически, мы сюда никогда не дойдем, но компилятор ругается
    // Можно написать условия выше так, чтобы этот return не требовался, но так нагляднее
    return *this;
}

Fraction Fraction::operator+(Fraction anotherFraction) const
{
    int n = numerator * anotherFraction.denominator + anotherFraction.numerator * denominator;
    int d = denominator * anotherFraction.denominator;
    return Fraction(n / gcd(n, d), d / gcd(n, d));
}

Fraction Fraction::operator-(Fraction anotherFraction) const
{
    int n = numerator * anotherFraction.denominator - anotherFraction.numerator * denominator;
    int d = denominator * anotherFraction.denominator;
    return Fraction(n / gcd(n, d), d / gcd(n, d));
}

Fraction Fraction::operator*(Fraction anotherFraction) const
{
    int n = numerator * anotherFraction.numerator;
    int d = denominator * anotherFraction.denominator;
    return Fraction(n / gcd(n, d), d / gcd(n, d));
}

Fraction Fraction::operator/(Fraction anotherFraction) const
{
    int n = numerator * anotherFraction.denominator;
    int d = denominator * anotherFraction.numerator;
    return Fraction(n / gcd(n, d), d / gcd(n, d));
}

bool Fraction::operator==(Fraction anotherFraction) const
{
    return numerator == anotherFraction.numerator && denominator == anotherFraction.denominator;
}

bool Fraction::operator!=(Fraction anotherFraction) const
{
    return !(*this==anotherFraction);
}

bool Fraction::operator<(Fraction anotherFraction) const
{
    if(*this==anotherFraction) return false;
    return !(*this > anotherFraction);
}

bool Fraction::operator>(Fraction anotherFraction) const
{
    if(*this==anotherFraction) return false;
    const int tmp = this->numerator * this->denominator - anotherFraction.numerator * anotherFraction.denominator;
    return tmp > 0;
}

bool Fraction::operator<=(Fraction anotherFraction) const
{
    if(*this==anotherFraction) return true;
    return *this < anotherFraction;
}

bool Fraction::operator>=(Fraction anotherFraction) const
{
    if(*this==anotherFraction) return true;
    return *this > anotherFraction;
}

int Fraction::gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void Fraction::print() const
{
    std::cout << numerator << "/" << denominator << std::endl;
}


