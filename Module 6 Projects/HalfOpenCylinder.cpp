/*************************************
 * Author: Ethan Atwood
 * Date: 07/21/2019
 * Description: HalfOpenCylinder Implementation
 * file
 *
 ************************************/

#include <iostream>
#include <cmath>
#include "HalfOpenCylinder.hpp"

/**************************************
 *          Default Constructor
 * Description: height and radius member 
 * variables initialized to 10 and 2.
 **************************************/
HalfOpenCylinder::HalfOpenCylinder()
{
    height = 10.0;
    radius = 2.0;
 //  surfaceArea(height, radius);
}



/**************************************
 *           Constructor
 * Description: initializing 2 parameters
 * to the data members
 **************************************/
HalfOpenCylinder::HalfOpenCylinder(double h, double r)
{
    height = h;
    radius = r;
}



/**************************************
 *           surfaceArea
 * Description: uses data members to calculate
 * surface area for an object of class
 * HalfOpenCylinder
 **************************************/
double HalfOpenCylinder::surfaceArea()
{
    double pi = 3.14159;
    double surfaceArea = (2.0 * pi * radius * height) +
    (pi * pow(radius, 2.0)); //no cylinder top SA formula

    return surfaceArea;
}
