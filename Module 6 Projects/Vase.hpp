/**********************************
 * Author: Ethan Atwood
 * Date: 07/22/2019
 * Description: Vase class specification
 * file that includes member data and
 * fucntions for class Vase.
 *
 **********************************/

#ifndef VASE_HPP
#define VASE_HPP

#include "HalfOpenCylinder.hpp"

class Vase
{
    private:
        HalfOpenCylinder hoc1; // calling HalfOpenCylinder and creating an instance hoc1
        double costPerSqInch;

    public:
        Vase(); 
        Vase(HalfOpenCylinder hoc1, double costPerSqInch); //constructor that passes object
        double totalCost();
        bool costsMoreThan(Vase vaseParam);//boolean return for comparing vase1 to vase2
};
#endif





