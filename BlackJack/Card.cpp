#include "Card.h"

Card::Card(CardSuit suit, CardValue value) : suit(suit), value(value), isVisible(false) { }

CardValue Card::getValue() const
{
    return value;
}

void Card::flip()
{
    isVisible = !isVisible;
}

