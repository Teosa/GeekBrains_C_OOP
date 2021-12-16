#include <iostream>

#include "Card.h"

int main()
{
    // test
    Card card(SPADE, JACK);
    std::cout << card.getValue() << std::endl; 
    return 0;
}
