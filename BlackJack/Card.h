#pragma once

enum CardSuit
{
    SPADE,   // Пики
    HEART,   // Черви
    DIAMOND, // Буби
    CLUB     // Крести
};

enum CardValue
{
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    JACK = 10,
    QUEEN = 10,
    KING = 10,
    ACE = 1
};

class Card
{
    CardSuit suit;
    CardValue value;
    bool isVisible;
public:
    Card(CardSuit suit, CardValue value);
    ~Card() = default;

    CardValue getValue() const;
    
    void flip();
};
