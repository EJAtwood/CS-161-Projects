/**************************************************************
 * Author: Ethan Atwood
 * Date:8/8/2019
 * Description: Quadratic.cpp implementation file including a
 * default constructor and overloaded constructor initializing
 * member variables. Three set functions to set the a, b, and c
 * values for the quadratic formula. ValueFor function returns 
 * the value for the quadratic equation after passing in a
 * parameter for x. numRealRoots tells how many roots are possible
 * given the value of the discriminate.
 *
 **************************************************************/
//various libraries for use in the file
#include "Quadratic.hpp" // include gaurd
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>

//function prototypes
void setA(double);
void setB(double);
void setC(double);
double valueFor(double);
double numRealRoots();


/**************************************************************
 *                      Quadratic:Quadratic
 * Description: Default constructor setting each coefficient
 * to 1.0
 **************************************************************/

Quadratic::Quadratic()
{
    a = 1.0;
    b = 1.0;
    c = 1.0; 
}


/**************************************************************
 *             Quadratic(double, double, double)
 * Description: an overloaded constructor that takes in 3 double
 * parameters and initializes the Quadratic Class member variables
 **************************************************************/
Quadratic::Quadratic(double aIn, double bIn, double cIn)
{
    a = aIn;
    b = bIn;
    c = cIn;
}


/**************************************************************
 *                          setA Function
 * Description: Sets the varaible A in the Quadratic Equation
 * to a double
 **************************************************************/
void Quadratic::setA(double aIn)
{
    a = aIn;
}



/**************************************************************
 *                          setB Function
 * Description: Sets the varaible B in the Quadratic Equation
 * to a double
 **************************************************************/
void Quadratic::setB(double bIn)
{
    b = bIn;
}


/**************************************************************
 *                          setC Function
 * Description: Sets the varaible C in the Quadratic Equation
 * to a double
 **************************************************************/
void Quadratic::setC(double cIn)
{
    c = cIn;
}



/**************************************************************
 *                          valueFor Function
 * Description: takes in a double parameter to use for x in the
 * quadaratic equation and returns the value of the qaudratic
 * accounting for a, b, c, and x. 
 **************************************************************/
double Quadratic::valueFor(double xValue)
{
    return (a*(pow(xValue, 2)) + (b * xValue) + c);
   
}


/**************************************************************
 *                          numRealRoots Function
 * Description: takes in no parameters and calculates the number
 * of real roots for the quadratic expression.It precisely takes 
 * into account round off erros and goes out to a significant
 * decimal point for determining if the real roots are equal to 
 * zero or not.
 **************************************************************/
double Quadratic::numRealRoots()
{
    //define a variable for discriminate since its used a few times
    double discrim = (pow(b,2) - (4 * a * c));

    if (discrim < -0.00000001)
        return 1;
        //std::cout << "1" << std::endl;
        //is the discriminate negative. If yes, answer is 1 root
        
    else if (discrim > 0.00000001)
        return 2;
        //std::cout << "2" << std::endl;
        //is the discriminate positive, if so, answer is 2 roots

    else if (discrim > -0.00000001 && discrim < 0.00000001 )
        return 0;
        //std::cout << "0" << std::endl;
        //is the discrimiante equal to zero, if so, no real roots

}

