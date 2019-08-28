/****************************************
 * Author: Ethan Atwood
 * Date: 07/22/2019
 * Descripton: Vase Implementation file
 * that ties together HalfOpenCylinder
 * methods and vase methods.
 *
 ***************************************/

#include <iostream>
#include <cmath>
#include "Vase.hpp"


/******************************************
 *             Default Constructor
 ******************************************/

Vase::Vase()
{
    //No need to initialize since initialized in HalfOpenCylinder
    //HalfOpenCylinder 
    costPerSqInch = 0.0;
}



/*******************************************
 *             Constructor
 * Description: Initializes HalfOpenCylinder 
 * object to Vase parameter along with cost
 ******************************************/
Vase::Vase(HalfOpenCylinder hoc1In, double cost)
{
    hoc1 = hoc1In;
    costPerSqInch = cost;  
}



/******************************************
 *             totalCost
 * Description: multiplies cost parameter
 * with HalfOpenCylinder objects surfaceArea
 * function
 *****************************************/
double Vase::totalCost()
{
      
    return costPerSqInch * (hoc1.surfaceArea());
    //surface area of vase * CostPerSqInch
}



/******************************************
 *             costsMoreThan
 * Description: boolean method that compares
 * a vase the method was called on to the 
 * vase parameters of the method
 *****************************************/

bool Vase::costsMoreThan(Vase vaseParam)
{

    if (costPerSqInch * hoc1.surfaceArea() > vaseParam.totalCost())
        return true;
    else
        return false;
    
}

