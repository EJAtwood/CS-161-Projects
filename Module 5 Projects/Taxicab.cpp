/*********************************************
 * Author:  Ethan Atwood  
 * Date:    7/18/19 
 * Description: Taxicab.cpp implementation file
 * which includes the functions for call Taxicab.
 * 
 **********************************************/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Taxicab.hpp"


/*********************************************
 *             Taxicab::Taxicab
 * Description: Default Constructor setting 
 * member variables/attribute to zero
 *********************************************/
Taxicab::Taxicab()
{
    xcoord = 0;
    ycoord = 0;
    totalDistance = 0;    
}


/*********************************************
 *            Taxicab::Taxicab
 * Description: Overloaded Constructor taking 
 * two parameter integers to initialize
 * the coordinates
 *********************************************/
Taxicab::Taxicab(int xStart, int yStart)
{
    xcoord = xStart;
    ycoord = yStart;
    totalDistance = 0;
}

  
/*********************************************
 *             moveX Function
 * Description: moveX non return function that
 * takes in an integer and moves/sets the xcoord
 * that 'distance' away
 *********************************************/
void Taxicab::moveX(int distance)
{
    xcoord += distance;
    totalDistance += abs(distance);
}



/*********************************************
 *            moveY Function
 * Description: moveY is a non return function
 * that takes in a 'distance' and moves/sets
 * the ney Y coordinate to that spot
 *********************************************/
void Taxicab::moveY(int distance)
{
   ycoord += distance;
   totalDistance += abs(distance);
}


/*********************************************
 *               getXCoord
 * Description: an accessor to allow the user to
 * call the current X coordinate 
 *********************************************/
int  Taxicab::getXCoord()
{
    return xcoord;
}


/*********************************************
 *             getYCoord
 * Description: an accessor to allow to the user 
 * to call the current Y coordinate
 *********************************************/
int Taxicab::getYCoord()
{
    return ycoord;
}



/*********************************************
 *           getDistanceTraveled
 * Description: get accessor that allows user to
 * call the calculated ditance traveld of an 
 * object in Taxicab class
 *********************************************/
int Taxicab::getDistanceTraveled()
{
    return totalDistance;
   
}




