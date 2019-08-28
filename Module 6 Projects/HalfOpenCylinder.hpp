/************************************
 * Author: Ethan Atwood
 * Date: 07/20/2019
 * Description: HalfOpenCylinder class 
 * specification file that includes
 * member data and functions for 
 * class HalfOpenCylinder.
 *
 ***********************************/

#ifndef HALFOPENCYLINDER_HPP
#define HALFOPENCYLINDER_HPP 

class HalfOpenCylinder
{
    private:
        double height;
        double radius;

    public:
        HalfOpenCylinder(); //default constructor
        HalfOpenCylinder(double, double); //overloaded constructor
        double surfaceArea();
        
};
#endif
 
