#include <iostream>
#include "FBoard.hpp"

void FBoard::printBoard()
{
  std::cout << std::endl <<"Gamestate: " << currentGameState << std::endl;
  for(int row=0; row<8; row++){ // print columns
    for(int col=0;col<8;col++){ // print rows
      std::cout<<myArray[row][col]; // print what's at that row/column
    }
    std::cout << std::endl;
    }
}

bool InvalidXMove()
{
  FBoard fb;
  return !fb.moveX(-1,-1);
}

bool ComplicatedGameIsUnfinished()
{
  FBoard fb;
  fb.moveX(-1,-1);
  fb.moveX(0,1);
  fb.moveX(1,0);
  fb.moveX(1,1);
  fb.moveX(2,2);
  fb.moveX(3,3);
  fb.moveX(4,4);
  fb.moveX(5,5);
  fb.moveX(6,6); // o is in the way
  fb.moveX(7,7); // x can't move here
  fb.moveO(6,6,6,5);
  fb.moveO(6,6,5,6);
  fb.moveO(7,7,5,6);
  fb.moveO(7,7,8,8);
  fb.printBoard();
  return fb.getGameState()==2;
}

bool GameIsOverMoveX()
{
  FBoard fb;
  
  fb.moveO(6,6,5,5); 
  fb.moveO(5,5,4,6);
  fb.moveO(7,7,6,6);
  fb.moveO(6,6,5,5);
  fb.moveO(5,5,6,4);
  
  fb.moveX(1,1);
  fb.moveX(2,2);
  fb.moveX(3,3);
  fb.moveX(4,4);
  fb.moveX(5,5);
  fb.moveX(6,6);
  fb.moveX(7,7);
  return !fb.moveX(6,6);
}

bool GameIsOverMoveO()
{
  FBoard fb;
  
  fb.moveO(6,6,5,5); 
  fb.moveO(5,5,4,6);
  fb.moveO(7,7,6,6);
  fb.moveO(6,6,5,5);
  fb.moveO(5,5,6,4);
  
  fb.moveX(1,1);
  fb.moveX(2,2);
  fb.moveX(3,3);
  fb.moveX(4,4);
  fb.moveX(5,5);
  fb.moveX(6,6);
  fb.moveX(7,7);
  return !fb.moveO(6,6,5,5);
}

bool SimpleXWin()
{
  FBoard fb;
  
  fb.moveO(6,6,5,5); 
  fb.moveO(5,5,4,6);
  fb.moveO(7,7,6,6);
  fb.moveO(6,6,5,5);
  fb.moveO(5,5,6,4);
  
  fb.moveX(1,1);
  fb.moveX(2,2);
  fb.moveX(3,3);
  fb.moveX(4,4);
  fb.moveX(5,5);
  fb.moveX(6,6);
  fb.moveX(7,7);
  fb.printBoard();
  return fb.getGameState() == 0;
}

bool SimpleOWin()
{
  FBoard fb;
  
  fb.moveO(6,6,5,5);
  fb.moveO(5,5,4,4);
  fb.moveO(4,4,3,3);
  fb.moveO(3,3,2,2);
  fb.moveO(2,2,1,1);
  
  fb.printBoard();
  return fb.getGameState() == 1;
}


/*************************************************************
 *           Description: main to test game function
 *
 ************************************************************
int main()
{
  FBoard fb;
  // fb.moveX(1,1);
  // fb.moveX(2,0);
  // fb.moveO(6,6,5,5);
  fb.printBoard();
  fb.getGameState();
  std::cout<<"SimpleXWin"<<std::endl<<SimpleXWin()<<std::endl<<std::endl;
  //std::cout<<"SimpleOWin"<<std::endl<<SimpleOWin()<<std::endl<<std::endl;
  //std::cout<<"InvalidXMove"<<std::endl<<InvalidXMove()<<std::endl<<std::endl;
  //std::cout<<"ComplicatedGameIsUnfinished"<<std::endl<<ComplicatedGameIsUnfinished()<<std::endl<<std::endl;
  // std::cout<<"GameIsOverMoveX"<<std::endl<<GameIsOverMoveX()<<std::endl<<std::endl;
  //std::cout<<"GameIsOverMoveO"<<std::endl<<GameIsOverMoveO()<<std::endl<<std::endl;
              
                   
   return 0;
}   
*/  
  
  

/**************************************************
 * Description: Main to control piece moves
 *
 ***************************************************
int main()
{

    int Xin = 0;
    int Yin = 0;
    int X_In = 0;
    int Y_In = 0;
    int Xfrom = 0;
    int Yfrom = 0;
    FBoard fb;
    fb.printBoard();  
    std::cout << "To move x enter the (x,y) coordinates to go to: " << std::endl; 
    std::cin >> Xin;
    std::cin >> Yin;
    fb.moveX(Xin,Yin);
    std::cout << "To move o please enter the (x,y), coordinates to go from, to go to: " << std::endl;
    std::cin >> Xfrom;
    std::cin >> Yfrom;
    std::cin >> X_In; 
    std::cin >> Y_In;
    fb.moveO(Xfrom, Yfrom, X_In, Y_In);
    fb.printBoard();
    fb.getGameState();
    return 0;
}
*/

/**************************************************
 * Description: Another Version to control move
 *
 *************************************************/

int main () 
{
    FBoard fb;
    char gamePlay;
    int Xin = 0;
    int Yin = 0;
    int X_In = 0;
    int Y_In = 0;
    int Xfrom = 0;
    int Yfrom = 0;
    
    std::cout << "Would you like to play the game :D (y/n)" << std::endl;
    std::cin >> gamePlay;
        
    //std::cout << "Starting Board" << std::endl;
    //fb.printBoard();

    if(gamePlay == 'y' || 'Y')
    {
        std::cout << "Starting Board" << std::endl;
        fb.printBoard();

        //figuring out what to do for ending game once someone has won...
        while(fb.getGameState() != 0 || fb.getGameState() != 1)
        {
            std::cout << "To move x enter the (x,y) coordinates to go to: " << std::endl; 
            std::cin >> Xin;
            std::cin >> Yin;
            fb.moveX(Xin,Yin);
            std::cout << "To move o, enter the (x,y) o is currently at, and the (x,y) o should go: " << std::endl;
            std::cin >> Xfrom;
            std::cin >> Yfrom;
            std::cin >> X_In; 
            std::cin >> Y_In;
            fb.moveO(Xfrom, Yfrom, X_In, Y_In);
            fb.printBoard();
            fb.getGameState();
        }
            return true;
    }
    else if(gamePlay == 'n' || 'N') 
    {
        std::cout << "The Game will not be played" << std::endl;
        return false; 
    }

}



