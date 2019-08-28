/*******************************************************
 * Author: Ethan Atwood
 * Date: 08/14/2019
 * Description: header file that defines a class FBoard
 * which houses the data members enum data type gameState,
 * xLocation,a const for the array to define empty, and many 
 * helper functions which aid in moving x and o, or check to
 * see if the game is over(isMoveX/OValid, canXMove, doMoveX/O,
 * isGameOver). Enumerated gameState is defined outside of the 
 * class as well. Public functions are getGameState, and 
 * the main funtions moveX/O, and the initialization of the array size.
 * 
 *******************************************************/

#ifndef FBOARD_HPP
#define FBOARD_HPP
#include <cstring>

//                0       1         2    
enum gameState {X_WON, O_WON, UNFINISHED}; //enum data defined

class FBoard
{
  private:
    gameState currentGameState; //enumerated data type for gameState
    int xLocX, xLocY; //current XLocation
    bool isMoveXValid(int, int); //helper to moveX
    bool canXMove(int, int); //helper to moveX
    bool doMoveX(int, int); //helper to moveX
    bool isMoveOValid(int, int, int, int); //helper to moveO
    bool doMoveO(int, int, int, int); //helper to moveO
    bool isGameOver(); //helper to both moveO and moveX
    const char EMPTY = '-';//initialize const for filling empty array spots
  public:
    gameState getGameState();//getGameState returns gameState
    FBoard();//default constructor
    char myArray[8][8];//defines 2D array size
    bool moveX(int, int); //main functio to moveX
    bool moveO(int, int, int, int); //main function to moveO
   // void printBoard();//print board function
};
#endif

