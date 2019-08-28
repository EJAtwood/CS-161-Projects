/*********************************************
 * Author:  Ethan Atwood
 * Date:    7/18/19
 * Description: Declaration file including 
 * member variables and function prototypes 
 *
 *******************************************/


#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
    private:
        int xcoord;
        int ycoord;
        int totalDistance;

    public:
        Taxicab(); //default constructor
        Taxicab(int, int);//initializes coord and distance

        void moveX(int); //functions for x and y coord movement
        void moveY(int);       

        int getXCoord(); //accessor for getting x and y coord 
        int getYCoord();
        int getDistanceTraveled(); //calculates distance
                      
};
#endif
