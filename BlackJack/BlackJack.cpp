#include <iostream>

#include "Headers/Casino.h"

int main()
{
    int playersQty = 0;

    std::cout << "Enter players quantity (min 1, max 7)" << std::endl;
    std::cin >> playersQty;

    if(playersQty < 1 || playersQty > 7)
    {
        std::cout << "Invalid players quantity" << std::endl;
        return -1;
    }

    Casino casino;
    
    for (int i = 0; i < playersQty; ++i)
    {
        string playerName;
        std::cout << "Enter player's " << i + 1 << " name: ";
        std::cin >> playerName;
        
        casino.addPlayer(playerName);
    }

    casino.startTheGame();
    
    return 0;
}
