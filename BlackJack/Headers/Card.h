#pragma once
#include <map>
#include <ostream>

using namespace std;

enum CardSuit
{
    SPADE, // Пики
    HEART, // Черви
    DIAMOND, // Буби
    CLUB // Крести
};

enum CardValue
{
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
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
    static string SPADE_UNICODE;
    static string CLUB_UNICODE;
    static string HEART_UNICODE;
    static string DIAMOND_UNICODE;
    static map<CardValue, string> cardValueAsString;
    
    CardSuit suit;
    CardValue value;
    bool released;
    bool hidden;

    wstring getSuitUnicode();
    static map<CardValue, string> fillMap();
public:
    Card(CardSuit suit, CardValue value);
    ~Card();

    friend ostream& operator<<(ostream& stream, Card& card);

    CardValue getValue() const;
    string getValueAsString() const;
    void setReleased(bool value);
    bool isReleased() const;
};
