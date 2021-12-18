#include "Headers/Card.h"

#include <iostream>

string Card::SPADE_UNICODE = "\u2660";
string Card::CLUB_UNICODE = "\u2663";
string Card::HEART_UNICODE = "\u2665";
string Card::DIAMOND_UNICODE = "\u2666";
map<CardValue, string> Card::cardValueAsString = fillMap();

map<CardValue, string> Card::fillMap()
{
    map<CardValue, string> stringSuits;

    stringSuits[TWO] = "TWO";
    stringSuits[THREE] = "THREE";
    stringSuits[FOUR] = "FOUR";
    stringSuits[FIVE] = "FIVE";
    stringSuits[SIX] = "SIX";
    stringSuits[SEVEN] = "SEVEN";
    stringSuits[EIGHT] = "EIGHT";
    stringSuits[NINE] = "NINE";
    stringSuits[TEN] = "TEN";
    stringSuits[JACK] = "JACK";
    stringSuits[QUEEN] = "QUEEN";
    stringSuits[KING] = "KING";
    stringSuits[ACE] = "ACE";

    return stringSuits;
}

Card::Card(CardSuit suit, CardValue value) : suit(suit), value(value), released(false), hidden(true)
{
}

Card::~Card()
{
    std::cout << "Card destructor" << std::endl;
}


CardValue Card::getValue() const
{
    return value;
}

void Card::setReleased(const bool value)
{
    released = value;
}

bool Card::isReleased() const
{
    return released;
}

ostream& operator<<(ostream& stream, Card& card)
{
    if (card.hidden)
    {
        return stream << "*HIDDEN*";
    }
    
    // wcout << card.getSuitUnicode();
    return stream << card.getSuitUnicode().c_str() << " " << card.getValueAsString();
}

wstring Card::getSuitUnicode()
{
    wstring result;
    
    switch (suit)
    {
        case SPADE: return wstring(SPADE_UNICODE.begin(), SPADE_UNICODE.end());
        case HEART: return wstring(HEART_UNICODE.begin(), HEART_UNICODE.end());
        case DIAMOND: return wstring(DIAMOND_UNICODE.begin(), DIAMOND_UNICODE.end());
        case CLUB: return wstring(CLUB_UNICODE.begin(), CLUB_UNICODE.end());
    }
    
}

string Card::getValueAsString() const
{
    return cardValueAsString[value];
}

