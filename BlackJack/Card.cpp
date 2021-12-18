#include "Headers/Card.h"

Card::Card(CardSuit suit, CardValue value) : suit(suit), value(value), isVisible(false) { }

CardValue Card::getValue() const
{
    return value;
}



