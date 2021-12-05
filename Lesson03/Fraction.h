#pragma once

class Fraction
{
    int numerator;   // числитель
    int denominator; // знаменатель

    static int gcd(int a, int b);
public:
    Fraction(int numerator, int denominator);

    Fraction operator-();
    
    Fraction operator+(Fraction anotherFraction) const;
    Fraction operator-(Fraction anotherFraction) const;
    Fraction operator*(Fraction anotherFraction) const;
    Fraction operator/(Fraction anotherFraction) const;

    bool operator==(Fraction anotherFraction) const;
    bool operator!=(Fraction anotherFraction) const;
    bool operator<(Fraction anotherFraction) const;
    bool operator>(Fraction anotherFraction) const;
    bool operator<=(Fraction anotherFraction) const;
    bool operator>=(Fraction anotherFraction) const;

    void print() const;
};