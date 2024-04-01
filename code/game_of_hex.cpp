#include <vector>
#include "classes.h"

void drawBoard(int size);

void drawBoard(int size, charPair pair, char player);

intPair symbolPaireToIntPair(charPair symbolPair);

int main()
{
    int size;
    char row;
    char column;
    char player = 'B';

    charPair symbolsPair;


    std::cout << "enter ther board size: " << std::endl;
    std::cin >> size;
    drawBoard(size, symbolsPair, 'B');

    while (row != 'q' && column != 'q')
    {
        std::cout << "player: "<< player << std::endl;
std::cout << "row: "<< std::endl;
        std::cin >> row;
        std::cout << "column: "<< std::endl;
        std::cin >> column;
        symbolsPair.setFirst(row);
        symbolsPair.setSecond(column);
        std::cout<<symbolsPair<<std::endl;
        drawBoard(size, symbolsPair, player);

    }
}

// printing the top of the board because it is the only only part that's diffrent
void printFirstRow(int size, charPair pair, char player)
{
    intPair int_pair = symbolPaireToIntPair(pair);
    // print the symbol reference for each coloumn (1 2 3 . . . .  a b c . . . . A B C . . .)
    for (int i = 0; i < size * 2 + size - 2; i++)
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
        if (int_pair.first == 0 && int_pair.second/2 == i  && int_pair.second % 2 == 0)
        {
            std::cout << "/" << player << "\\_";
        }
        else
        {
            std::cout << "/ \\_";
        }
    for (int j = 0; j <= size * 2 - 1; j++)
        std::cout << " ";
    std::cout << " " << 0;
    std::cout << std::endl;
}

// drawing the board
void drawBoard(int size, charPair pair, char player)
{

    intPair int_pair = symbolPaireToIntPair(pair);

    // draw first part
    printFirstRow(size, pair, player);

    // draw the rest
    int spacesNum = 0;
    for (int i = 1; i < size + 1; i++)
    {
        for (int j = 0; j < spacesNum; j++)
            std::cout << " ";
        for (int j = 0; j < size; j++)
        {
            // check if the current position matches the pair given by the player
            if (int_pair.first == i && (int)((int_pair.second - int_pair.first) / 2) - 1==  j - 1 &&  (int_pair.second + int_pair.first) % 2 == 0)
            {
                std::cout << "\\_/" << player;
            }

            else
            {
                std::cout << "\\_/ ";
            }
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
intPair symbolPaireToIntPair(charPair symbolPair)
{
    intPair pair;
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