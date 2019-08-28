/************************************************************
 * Author: Ethan Atwood
 * Date: 08/14/2019
 * Description:FBoard implementation file which includes various
 * data and function members, including several helper functions.
 * moveX function and moveO function take in integers from the
 * user/int main() and determine whether or not: 1)the move is 
 * valid (on the board, only diagonal, and not blocked in) and
 * 2)will return or update the game state depending on the game
 * pieces and how they lay on the board. X_WON, O_WON, and 
 * UNFINISHED are the three game states that are returned 
 * depending on the position of the pieces. The helper function
 * make the code easier to read and prevent too many nested ifs. 
 * isMoveX/O Valid address legal moves, canXmove addresses x's 
 * legal moves after O ahs moved, doX/OMove will move the pieces
 * if isMoveValid says its okay, and isGameOver assesses before 
 * the moves if the game is already over.
 *
 ************************************************************/
#include <iostream>
#include <cmath>
#include <cstring>
#include "FBoard.hpp"

/************************************************************
 *                   Default Constructor
 * Description: Sets array equal to empty chars '-', initializes the
 * game pieces x an do to the board, and sets the current location
 * of x. The game state is also initialized to unifinished. 
 * As the game is played, the game pieces will shift away from
 * the locations listed below if called on.
 ***********************************************************/
FBoard::FBoard()
{
    //initializing array to const EMPTY = '-'
    for(int row = 0; row < 8; row++)
    {  
    for(int col = 0; col < 8; col++)
      myArray[row][col] = EMPTY;  
    }
    
    //initialize piece starting position in array/on board
    myArray[0][0] = 'x';
  
    myArray[5][7] = 'o';
    myArray[6][6] = 'o';
    myArray[7][5] = 'o';
    myArray[7][7] = 'o';
  
    //starting xlocation
    xLocX = 0;
    xLocY = 0;

    //current game state starts as unfinished
    currentGameState = UNFINISHED;
}


/************************************************************
 *                         getGameState
 * Description: function to return the value of the gamestate
 ***********************************************************/
gameState FBoard::getGameState()
{
    return currentGameState;         
}


/************************************************************
 *               helper function: isGameOver
 * Description: function is used to determine what the current
 * GameState is to see if the game has been won or not. 
 * This funcion is used in moveX and moveO before the move is made. 
 ***********************************************************/
bool FBoard::isGameOver()
{
  //is the game already won?? if it is, the move will not be made
  //if the game is not won, the game will continue
    if(currentGameState == X_WON || currentGameState == O_WON)
        return true;
    else 
        return false;
 }


/************************************************************
 *               helper function:isMoveXValid
 * Description: function is called in moveX to determine if 
 * the move that is passed as an argument will be a valid move. 
 * If the move is valid then it return true and if it is not 
 * valid, it will return false. It check 3 things. Is the desired 
 * space occupied, is the move inside the bounds of the array/
 * board, and is the move diagonal.
 ***********************************************************/
bool FBoard::isMoveXValid(int moveToX, int moveToY)
{
    // 1. unoccupied space only
    // 2. out of bounds
    // 3. diagonal move only

    //if the move is out of bounds of the board
    if((moveToX < 0 || moveToX > 7) || (moveToY < 0 || moveToY > 7))
         return false;
           
    //desired space is not empty, the move cannot be made
    if(myArray[moveToX][moveToY] != EMPTY)
         return false;
                      
    //is the move diagonal, if so, it can be made
    if(((xLocX-1) == moveToX) && ((xLocY-1) == moveToY)) //(-,-) move
         return true;
    else if(((xLocX+1) == moveToX) && ((xLocY-1) == moveToY)) //(+,-) move
         return true;
    else if(((xLocX-1) == moveToX) && ((xLocY+1) == moveToY)) //(-,+) move
         return true;
    else if(((xLocX+1) == moveToX) && ((xLocY+1) == moveToY)) //(+,+) move
         return true;
    else
         return false; //if arguments passed in do not meet the above criteria, it isnt valid
}


/************************************************************
 *               helper function: doMoveX
 * Description: if ismoveX is true, then this function will
 * be executed. It will move 'x' to the new board location, set
 * its previous location to '-' and update the current x 
 * location coordinates. If the game has been won (7,7) by 'x',
 * the gameState will be updated to X_WON.
 ***********************************************************/
bool FBoard::doMoveX(int moveToX, int moveToY)
{
    myArray[xLocX][xLocY] = EMPTY; //set old 'x' location to empty
    myArray[moveToX][moveToY] = 'x'; //set new 'x' spot on board
    xLocX = moveToX; //update current xLocX
    xLocY = moveToY; //update current xLocY
  
    // if 'x' gets to this position, the game has been won
    if(moveToX == 7 && moveToY == 7)
        currentGameState = X_WON;
    return true; //return true since valid move
}


/************************************************************
 *                          moveX 
 * Description: function that takes in 2 parameters. isGameOver(), 
 * isMovexValid(), and doMoveX() are the helper functions that
 * are called in moveX. They 1) determine if the game is over
 * before x can even move, 2)determine if the new x location
 * passed in is even legal, 3) actually executes the move.
 ***********************************************************/
bool FBoard::moveX(int moveToX, int moveToY)
{
    if(isGameOver()) //set to false if game over, move wont be made
        return false; 
    else if(!isMoveXValid(moveToX, moveToY)) //set to false if move is invalid and wont move
        return false;
    else if(doMoveX(moveToX, moveToY)) //set to true if move was valid and will move piece
        return true;
    else 
        return false;
}


/************************************************************
 *               helper function:isMoveOValid
 * Description: function is called in moveO to determine if 
 * the move that is passed as argument will be a valid move. 
 * If the move is valid than it returns true and moves the piece.
 * If it is not valid, it will return false. It check 3 things:
 * Is the desired space occupied, is the move inside the bounds of the array/
 * board, and is the move diagonal AND not backwards. 
 ***********************************************************/
bool FBoard::isMoveOValid(int xFrom, int yFrom, int xTo, int yTo)
{
    // 1. uncoccupied space only
    // 2. out of bounds
    // 3. diagonal move only
    //if the move is out of bounds to start, not a valid move
    if((xTo < 0 || xTo > 7) || (yTo < 0 || yTo > 7))
        return false;

    //if the first coordinates do not hold a 'o' then invalid move
    if(myArray[xFrom][yFrom] != 'o')
        return false;

    //if the move is diagonal
    if(((xFrom-1) == xTo) && ((yFrom-1) == yTo)) //(-,-) move 
        return true;
    else if(((xFrom+1) == xTo) && ((yFrom-1) == yTo)) //((+,-) move
        return true;
    else if(((xFrom-1) == xTo) && ((yFrom+1) == yTo)) //(-,+) move
        return true;
    //NO MOVE FOR (+,+) like there is for 'x'. 
     else
        return false; //if entered value doesnt meet this criteria, it isn't legal
}


/************************************************************
 *               helper function: doMoveO
 * Description: if ismoveO is true, then this function will
 * be executed. It will move 'o' to the new board location, set
 * it's previous location to '-' and check to see if 'x' has any
 * legal moves left. If the game has been won (no legal moves
 *  by 'x'), the gameState will be updated to O_WON.
 ***********************************************************/
bool FBoard::doMoveO(int xFrom, int yFrom, int xTo, int yTo)
{
    myArray[xFrom][yFrom] = EMPTY; //set past o location to empty
    myArray[xTo][yTo] = 'o'; //set new 'o' spot on board
  
    
    //need to check if legal move for 'x'?
    if(!canXMove(xLocX, xLocY))
        currentGameState = O_WON;  
    return true; //return true since valid move
}


/************************************************************
 *               helper function: canXMove
 * Description: function is called in doMoveO to check if the 
 * move o just completed now blocks 'x' from making a legal 
 * move. If this function returns true to doMoveO, x still has
 * a legal move and the game has not won. If false is returned,
 * there are no more legal 'x' moves and O_WON.
 ***********************************************************/
bool FBoard::canXMove(int xLocX, int xLocY)
{
    //in each diagonal direction, is there a move to be made by 'x'?
    if(isMoveXValid(xLocX-1, xLocY-1))
        return true;
    if(isMoveXValid(xLocX-1, xLocY+1))
        return true;
    if(isMoveXValid(xLocX+1, xLocY-1))
        return true;
    if(isMoveXValid(xLocX+1, xLocY+1))
        return true;
    else
        return false; 
}


/************************************************************
 *                          moveO 
 * Description: moveO uses three helper functions. isGameOver(),
 * which was used before checks to see what the curretnGameState
 * is before 'o' is even moved. isMoveOValid check 3 things:
 * 1)is the space unoccupied and does the xFrom/yFrom contain an
 * 'o', 2)is the move on the board and not out of bounds, 3)is the 
 * move diagonal and NOt (+,+). Lastly, doMoveO moves 'o' and
 * assessed the legality of x's potential moves.
 ***********************************************************/
bool FBoard::moveO(int xFrom, int yFrom, int xTo, int yTo)
{
    //function called to see what currentGameState is
    if(isGameOver()) //set to false if game over
        return false;
  
    //isMoveOValid function is called
    if(!isMoveOValid(xFrom,yFrom, xTo, yTo))
        return false;
    
    //if move is valid then doMove) is calculated and it checks 
    //if any legal 'x' moves are still available 
    if(doMoveO(xFrom,yFrom, xTo, yTo))
        return true;
    else
        return false;
}



