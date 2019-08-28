/*****************************************************
** Author:  Ethan Atwood
** Date:    7/16/19
** Description: Box.cpp implementation file that  
** holds the functions to calc surface area and volume
*******************************************************/

#include <iostream>
#include <string>
#include "Box.hpp"


Box::Box() //default constructor set to 1
{
    height = 1;
    width = 1;
    length = 1;
}

Box::Box(double h, double w, double l) //initializing to field of the Box
{
    height = h;
    width = w;
    length = l;
}


/**********************************************
 *                Box::calcVolume             *
 * Description: This function returns the     *
 * volume of the Box.                         *
 *                                            *
 **********************************************/

double Box::calcVolume()
{
  return height * width * length;
} 


/**********************************************
 *               Box::caclSurfaceArea         *
 * Description: This functions returns the    *
 * surface area of the Box.                   *
 *                                            *
 **********************************************/

double Box::calcSurfaceArea()
{
    return 2.0*(height * width) + 2.0*(height * length) +
    2.0 * (length * width);

}

/**********************************************
 *               Box::setHeight               *
 * Description: sets h = height               *
 **********************************************/
void Box::setHeight(double h)
{
    height = h;
}

/*********************************************
 *               Box::setWidth               *
 * Description: sets w = width               *
 *********************************************/
void Box::setWidth(double w)
{
    width = w;
}

/*********************************************
 *               Box::setLength              *
 * Description: sets l = length              *
 *********************************************/
void Box::setLength(double l)
{
    length = l;
}


/*********************************************
 *               Main                        *
 *                                           *
 *********************************************/
/*
int main()
{



    Box box1(2.4, 7.1, 5.0); //declare object and pass values    
    Box box2;
 
    double volume1 = box1.calcVolume();
    double surfaceArea1 = box1.calcSurfaceArea();
    double volume2 = box2.calcVolume();
    double surfaceArea2 = box2.calcSurfaceArea();
    
    std::cout << "box1" << std::endl;
    std::cout << volume1 << std::endl;
    std::cout << surfaceArea1 << std::endl;
    std::cout << "box2" << std::endl;
    std::cout << volume2 << std::endl;
    std::cout << surfaceArea2 << std::endl;
   

    return 0;

}
*/

