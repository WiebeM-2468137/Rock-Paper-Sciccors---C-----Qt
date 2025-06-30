#include "Header Files/player.hpp"
#include "Header Files/game.hpp"
#include "Header Files/moves.hpp"

#include <iostream>

int main()
{
    std::vector<std::string> names = {"Me", "Bot1"};
    std::vector<bool> botFlags = {false, true};

    Game myGame(names, botFlags);

    std::cout << "Welcome to Rock, Paper, Sciccors\n";
    std::cout << "Menu:\n";
    std::cout << "1: Play Next Round\n";
    std::cout << "2: End Game\n";
    int in;

    while (true)
    {
        std::cout << "Next Action: ";
        std::cin >> in;
        if (in == 2)
        {
            break;
        }

        myGame.playRound();
    }

    std::cout << "Thanks For Playing!";

    return 0;
}