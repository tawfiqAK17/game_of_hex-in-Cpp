#include <iostream>
using namespace std;

void drawBoard(int size);
int main()
{
    int size;
    cout << "enter ther board size: " << endl;
    cin >> size;
    drawBoard(size);
}


// printing the top of the board because it is the only only part that's diffrent
void printFirstRow(int size)
{
    // print the symbol reference for each coloumn (1 2 3 . . . .  a b c . . . . A B C . . .)
    for (int i = 0; i < size * 2 + size - 2; i++)
    {
        if (i < 10)
        {
            cout << " " << i;
        }
        else if(i < 26 + 10){
            cout << " " << (char) (97 + i - 10);
        }
        else
        {
            cout << " " << (char) (65 + i - 26 - 10);
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++)
        cout << " _  ";
        
    cout << endl;

    for (int i = 0; i < size; i++)
        cout << "/ \\_";
    for (int j = 0; j <= size * 2 - 1; j++)
        cout << " ";
    cout << " "<<0;
    cout << endl;
}

// drawing the board
void drawBoard(int size)
{   
        // draw first part
        printFirstRow(size);

        // draw the rest
        int spacesNum = 0;
        for (int i = 1; i < size + 1; i++)
        {
            for (int j = 0; j < spacesNum; j++)
                cout << " " ;
            for (int j = 0; j < size; j++){
                    cout << "\\_/ ";
            }
            if(i < size) cout << "\\_";
            
            for (int j = 0; j < (size * 2 + size - 2) - size - spacesNum; j++)
                cout << " ";

            // print the symbol reference for each coloumn (1 2 3 . . . .  a b c . . . . A B C . . .)     
            if (i < size) 
                if (i < 10)
                {
                    cout << " " << i;
                }
                else if(i < 26 + 10){
                    cout << " " << (char) (97 + i - 10);
                }
                else
                {
                    cout << " " << (char) (65 + i - 26 - 10);
                }

            spacesNum += 2;
            cout << endl;
        }
}
