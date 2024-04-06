#include <vector>
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

    // all moves that had players made
    std::vector<Move> moves;

    std::cout << "enter ther board size: " << std::endl;
    std::cin >> size;
    drawBoard(size, moves);

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

        // creat a new move instance
        Move *move = new Move(symbolPaireToIntPair(symbolsPair), player);

        // check if the position is valid
        if ((move->position.first + move->position.second) % 2 != 0 || move->position.first <= size || move->position.second < 3 * size - 2)
        {
            std::cout << "invalid position" << std::endl <<std::endl;
            continue;
        }
        // if the position is valid, add it to the moves vector
        moves.push_back(*move);
        delete move;

        drawBoard(size, moves);


        // check if the swap rule allready invoked (it invokes only once in the first move)
        if (!swapedBefore)
        {
            // ask if the other player want to swap (a hex rule)
            char answer;
            std::cout << nextPlayer(player) << " do you want to swap 'y' or 'n' ?? ";
            std::cin >> answer;

            if (answer == 'y')
            {
                //swap the position
                moves[moves.size() - 1].swapPos(nextPlayer(player));
                //change the player
                player = nextPlayer(player);
            }
            //the swap rule is invoked
            swapedBefore = true;
            // draw the board
            drawBoard(size, moves);
        }

        // change the player
        player = nextPlayer(player);
    }
}
