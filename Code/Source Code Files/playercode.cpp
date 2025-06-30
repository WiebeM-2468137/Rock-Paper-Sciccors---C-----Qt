#ifndef PLAYER_CPP
#define PLAYER_CPP

#include "../Header Files/player.hpp"
#include <iostream>
#include <random>

Move HumanPlayer::chooseMove() const
{
    int choice;
    std::cout << "Give Your Choice: ";
    std::cin >> choice;

    return Move{choice - 1};
}

Move BotPlayer::chooseMove() const
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 3);

    int choice = dist(gen);
    return static_cast<Move>(choice);
}

#endif