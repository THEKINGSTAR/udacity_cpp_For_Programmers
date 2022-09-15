
//Create a 4x4 game board
/* 
Prompt the first user (the 'x' user) to enter their name
Prompt the second user (the 'o' user) to enter their name
Prompt the 'x' user to select a grid position where they would like to place an 'x'.
Prompt the 'o' user to select a grid position where they would like to place an 'o'.
After each user has a turn, check for any row, column, diagonal that has 4 'x's or 4 'o's.
If 4 'x's are found in the same col, row, diagonal, declare the 'x' user the winner.
If 4 'o's are found in the same col, row, diagonal, declare the 'o' user the winner.
End the game and declare the winner.
If the grid is filled (each player gets 8 turns) and there is not a row, column, diagonal
with 4 of the same symbol, the game is tied. Declare a tie game. 
*/



//---------------------------------------------------------------------------------------------------
#include "mainFunctions.hpp"
using namespace std;
/************************************************************-----USER DATA-------*****************************************************************************/
class userdata
{
    private:
        string name;
        string victory;

public:
    userdata();
    void setuserdata(string nameIn);
    string getuserdata();

        ~userdata();
};

//-------------------------------------------------------------------------
userdata::userdata()
{
    name = " ";
}
//-------------------------------------------------------------------------

void userdata::setuserdata(string nameIn)
{
    name = nameIn;
}
string userdata::getuserdata()
{
    return name;
}
//-------------------------------------------------------------------------
/**************************************************************************************************************************************************************/
/************************************************************-----GAME DATA-------*****************************************************************************/
class gameBoard
{
    char game_board[4][4];

    public :
    gameBoard();
    void setPlayerBoardInput(int row , int column , char input);
    char getlayerBoardInput(int row, int column);

    void printBoard();

    int fourInRow();

    ~gameBoard();
};
//-------------------------------------------------------------------------

gameBoard::gameBoard()
{
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            game_board[r][c] = '-';
        }
    }
}
gameBoard::~gameBoard()
{
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            game_board[r][c] = '-';
        }
    }
}
//-------------------------------------------------------------------------
void gameBoard::setPlayerBoardInput(int row, int column, char input)
{
    game_board[row][column] = input;
    
}
char gameBoard::getlayerBoardInput(int row, int column)
{
   return game_board[row][column] ;
}

//-------------------------------------------------------------------------

int gameBoard::fourInRow()
{
    int countX ;
    int countO ;
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            if (game_board[r][c]=='x')
            {
                countX++;
            }
            if (game_board[r][c] == 'o')
            {
                countO++;
            }
        }
    }

    if (countX>countO)
    {
        return countX ;
    }
    else
    {
        return countO ;
    }

    
}
//-------------------------------------------------------------------------

void gameBoard::printBoard()
{
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout << game_board[r][c];
        }
    }
}
//-------------------------------------------------------------------------