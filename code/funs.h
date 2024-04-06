#pragma once
#include "classes.h"

// printing the top of the board because it is the only only part that's diffrent
void printFirstRow(int size, std::vector<Move> moves)
{
    // print the symbol reference for each coloumn (1 2 3 . . . .  a b c . . . . A B C . . .)
    for (int i = 0; i < size * 3 - 2; i++)
    {
        if (i < 10)
        {
            std::cout << " " << i;
        }
        else if (i < 26 + 10)
        {
            std::cout << " " << (char)(97 + i - 10);
        }
        else
        {
            std::cout << " " << (char)(65 + i - 26 - 10);
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < size; i++)
        std::cout << " _  ";

    std::cout << std::endl;

    for (int i = 0; i < size; i++)
    {
        int move_printed = false;
        // check if the current position matches an existing move position
        for (int k = 0; k < moves.size(); k++)
        {
            if (moves[k].getPosition().first == 0 && moves[k].getPosition().second / 2 == i && moves[k].getPosition().second % 2 == 0)
            {
                std::cout << "/" << moves[k].getPlayer() << "\\_";
                move_printed = true;
                break;
            }
        }
        if (!move_printed)
            std::cout << "/ \\_";
    }
    for (int j = 0; j <= size * 2 - 1; j++)
        std::cout << " ";
    std::cout << " " << 0;
    std::cout << std::endl;
}

// drawing the board
void drawBoard(int size, std::vector<Move> moves)
{


    // draw first part
    printFirstRow(size, moves);

    // draw the rest
    int spacesNum = 0;
    for (int i = 1; i < size + 1; i++)
    {
        for (int j = 0; j < spacesNum; j++)
            std::cout << " ";
        for (int j = 0; j < size; j++)
        {
            int move_printed = false;
            // check if the current position matches an existing move position
            for (int k = 0; k < moves.size(); k++)
            {
                if (moves[k].getPosition().first == i && (int)((moves[k].getPosition().second - moves[k].getPosition().first) / 2) - 1 == j - 1 && (moves[k].getPosition().second + moves[k].getPosition().first) % 2 == 0)
                {
                    std::cout << "\\_/" << moves[k].getPlayer();
                    move_printed = true;
                    break;
                }
            }
            if (!move_printed)
                std::cout << "\\_/ ";
        }
        if (i < size)
            std::cout << "\\_";

        for (int j = 0; j < (size * 2 + size - 2) - size - spacesNum; j++)
            std::cout << " ";

        // print the symbol reference for each row (1 2 3 . . . .  a b c . . . . A B C . . .)
        if (i < size)
            if (i < 10)
            {
                std::cout << " " << i;
            }
            else if (i < 26 + 10)
            {
                std::cout << " " << (char)(97 + i - 10);
            }
            else
            {
                std::cout << " " << (char)(65 + i - 26 - 10);
            }

        spacesNum += 2;
        std::cout << std::endl;
    }
}

// transfer the symbol reference pair to an int pair
IntPair symbolPaireToIntPair(CharPair symbolPair)
{
    IntPair pair;
    if (symbolPair.first >= '0' && symbolPair.first <= '9')
        pair.setFirst(symbolPair.first - '0');
    else if (symbolPair.first >= 'a' && symbolPair.first <= 'z')
        pair.setFirst(symbolPair.first - 'a' + 10);
    else if (symbolPair.first >= 'A' && symbolPair.first <= 'Z')
        pair.setFirst(symbolPair.first - 'A' + 26 + 10);
    else
        pair.setFirst(-1);
    if (symbolPair.second >= '0' && symbolPair.second <= '9')
        pair.setSecond(symbolPair.second - '0');
    else if (symbolPair.second >= 'a' && symbolPair.second <= 'z')
        pair.setSecond(symbolPair.second - 'a' + 10);
    else if (symbolPair.second >= 'A' && symbolPair.second <= 'Z')
        pair.setSecond(symbolPair.second - 'A' + 26 + 10);
    else
        pair.setSecond(-1);
    return pair;
}

// switch between players
char nextPlayer(char player)
{
    if (player == 'B')
        return 'W';
    return 'B';
}


