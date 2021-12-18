#include <iostream>
#include <io.h>
#include <fcntl.h>

#include "Headers/Casino.h"

#define SPADE L"\u2660"
#define CLUB L"\u2663"
#define HEART L"\u2665"
#define DIAMOND L"\u2666"

int main()
{
    // _setmode(_fileno(stdout), _O_U16TEXT);
    // std::wcout << L"Hello, \u0444!\n" << endl;
    // std::wcout << SPADE << endl;
    // std::wcout << L"\u1F0A1" << endl;
    
    int playersQty = 0;
    
    cout << "Enter players quantity (min 1, max 7)" << std::endl;
    cin >> playersQty;
    
    if(playersQty < 1 || playersQty > 7)
    {
        cout << "Invalid players quantity" << std::endl;
        return -1;
    }
    
    Casino casino;
    
    for (int i = 0; i < playersQty; ++i)
    {
        string playerName;
        cout << "Enter player's " << i + 1 << " name: ";
        cin.ignore(1);
        getline(cin, playerName);
        cout << endl;
        casino.addPlayer(playerName);
    }
    
    casino.startTheGame();
    
    return 0;
}
