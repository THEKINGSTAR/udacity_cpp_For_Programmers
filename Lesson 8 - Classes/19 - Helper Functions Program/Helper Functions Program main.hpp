/*
For this program, I have created a class called 'Gameboard'.

Gameboard has a private member 'gameSpace[4][4]' that is a 4x4 array that accepts a char for each of the 16 positions.

The class has four public members that are functions and a constructor:

the constructor sets each value of gameSpace to the char value '-'
each position to be set with a single char
each position can be read individually
printInfo will print gameSpace as a 4x4 matrix
the helper function 'fourInRow' checks every row, looking for four 'x's.
When it finds four x's in the same row, it returns a '1', otherwise it returns a '0'.
You will need to complete the class Gameboard.
*/

/*header file for main.cpp*/
#include <iostream>
#include <iomanip>
using namespace std;
//-----------------------------------------
//-----------------------------------------
class Gameboard
{
    char gameSpace[4][4];

public:
    Gameboard();    
                                        // initialize the board with '-' in all 16 spaces
    void setGameSpace(int row, int column, char value); // x,y,or '-' in each game square
    char getGameSpace(int row, int column);

    int fourInRow();  // four 'x's in any row 'wins'
    void printInfo(); // print the game board in a 4x4 matrix

   // ~Gameboard();
};

// TODO: complete the class definition
Gameboard::Gameboard()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gameSpace[i][j]='-';
        }
        
    }
}
//-----------------------------------------
/* Gameboard::~Gameboard()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gameSpace[i][j] = ' ';
        }
    }
} */
//-----------------------------------------
//-----------------------------------------
void Gameboard::setGameSpace(int row, int column, char value)
{
    gameSpace[row][column] = value;

}
//-----------------------------------------
char Gameboard::getGameSpace(int row, int column)
{
    return gameSpace[row][column];
}
//-----------------------------------------
int Gameboard::fourInRow()
{
    for (int i = 0; i < 4; i++)
    {
        //cout <<"chiking inputs "<< gameSpace[i][0] << gameSpace[i][1] << gameSpace[i][2] << gameSpace[i][3]<<endl;

        if (gameSpace[i][0] == gameSpace[i][1] && gameSpace[i][0] == gameSpace[i][3] && gameSpace[i][0] == gameSpace[i][2] )
        {

            return 1;
        }
    }
    return 0;
}
//-----------------------------------------

void Gameboard::printInfo()
{
    cout << std::setw(5);
    cout << "\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << gameSpace[i][j];
        }
        cout << "\n";
    }
}