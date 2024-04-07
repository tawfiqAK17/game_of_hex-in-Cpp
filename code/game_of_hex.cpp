#include <vector>
#include <array>
#include "classes.h"
#include "funs.h"


int main()
{
    int size;
    char row;
    char column;
    char player;

    bool swapedBefore = false;

    CharPair symbolsPair;


    std::cout << "enter ther board size: " << std::endl;
    std::cin >> size;
    // the matrix representation of the board
    char** board = new char*[size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[3 * size - 2];
    }
    //initialize the board to spaces
    initializeMatrix(board, size);
    drawBoard(size, board);

    // get the player that will start first
    std::cout << "who's ganna start first 'B' or 'W'?  ";
    std::cin >> player;
    //?  if the player enter the ESC key the loop will break (ascii(ESC) = 27)
    if (player == 27)
        return 0;

    while (true)
    {
        std::cout << "player: " << player << std::endl;
        // get the row 
        std::cout << "the row: ";
        std::cin >> row;
        //Quit ::: if the player enter the ESC key the loop will break (ascii(ESC) = 27
        if (row == 27)
            break;

        // get the column
        std::cout << "the column: ";
        std::cin >> column;
        //Quit ::: if the player enter the ESC key the loop will break (ascii(ESC) = 27
        if (column == 27)
            break;

        // set the symbols pair
        symbolsPair.setFirst(row);
        symbolsPair.setSecond(column);
        std::cout << symbolsPair << std::endl;

        // the int representation of the cordinates
        IntPair intPair = symbolPaireToIntPair(symbolsPair);

        // check if the position is valid
        if ((intPair.first + intPair.second) % 2 != 0 || intPair.first >= size || intPair.second >= 3 * size - 2 || board[intPair.first][intPair.second] != ' ')
        {
            std::cout << "invalid position" << std::endl <<std::endl;
            continue;
        }
        // if the position is valid, add it to the board matrix
        board[intPair.first][intPair.second] = player;

        drawBoard(size, board);


        // check if the swap rule allready invoked (it invokes only once in the first move)
        if (!swapedBefore)
        {
            // ask if the other player want to swap
            char answer;
            std::cout << nextPlayer(player) << " do you want to swap 'y' or 'n' ?? ";
            std::cin >> answer;

            if (answer == 'y')
            {
                //swap the player at the position
                board[intPair.first][intPair.second] = nextPlayer(player);
                //change the player
                player = nextPlayer(player);
            }
            //the swap rule is invoked
            swapedBefore = true;
            // draw the board
            drawBoard(size, board);
        }

        // change the player
        player = nextPlayer(player);
    }
}
