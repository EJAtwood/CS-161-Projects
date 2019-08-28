/**********************************
 * Author: Ethan Atwood
 * Date: 7/26/19
 * Description: Separate stdDev implementation
 * file that calculates standard deviation
 * for the Person object array data  
 *
 **********************************/

#include <iostream>
#include <cmath>
#include "Person.hpp"


/************************************
 *             stdDev
 * Description: passes in array
 * containing ages and names  and 
 * calculates standard deviation.
 *
 ************************************/

double stdDev (Person number[], int arraySize)
{   
    //initialize descriptive variables for calc std dev
    double total = 0;
    double average = 0;
    double sumd = 0;
 
    //For loop for retrieving total of all ages
    for (int i = 0; i < arraySize; i++) 
    {
        total += number[i].getAge();
    }
        average = total / arraySize; //averaging all ages from array

    //For loop retrieving distance from the mean and squaring it
    for (int i = 0; i < arraySize; i++)
    {
        sumd += (pow(number[i].getAge() - average, 2));
    }        
    
    return sqrt(sumd / arraySize); //returning standard deviation
}    
     
