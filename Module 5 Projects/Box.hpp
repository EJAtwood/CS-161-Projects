/*************************************************
** Author: Ethan Atwood
** Date: 7/17/19
** Description:Box.hpp class declaration file
** including member functions and variables.
************************************************/

#ifndef BOX_HPP
#define BOX_HPP

// Box class declaration/interface

class Box
{
    private:
        double height;
        double width; //member variables
        double length;

    public:
        //constructors
        Box();
        Box(double h, double w, double l);

        //member function prototypes
        void setHeight (double);
        void setWidth (double); //non return types
        void setLength (double);

        
        double calcVolume();
        double calcSurfaceArea(); //return functions

};
#endif
