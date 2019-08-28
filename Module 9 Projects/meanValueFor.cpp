/*******************************************************
 * Author: Ethan Atwood
 * Date:8/8/2019
 * Description:meanValueFor function which takes as a 
 * parameter a vector of pointers to an object of Quadratic
 * class. It passes in a value for x for the quadratic 
 * equation. It returns the the mean of quadratic values that
 * were pointed at by the vector elements.
 *
 *******************************************************/
#include "Quadratic.hpp" //include Quadratic guard
#include <vector>
#include <cmath>
#include <cstdlib>
#include <iostream>

//parameters include the Quadratic pointed to by the vector and 
//the value for x in the quadratic equation
double meanValueFor(std::vector<Quadratic*> vec, double xValue)
{

    double average = 0.0;//initialize a local variable for calc mean
    double sum = 0.0;

    //for loop for counting through the vector elements and summing
    //them for the average of quadratics
    for (int index = 0; index < vec.size(); index++)
        sum += (*vec[index]).valueFor(xValue);
        //*vec = the dereferenced value at the vector element [index]
        //.operator for accessing Quadratic member function valueFor
        //which is passed the value of x.
    
    average = sum / vec.size();//average of quadratics

    return average;
}
