/***********************************
 * Author: Ethan Atwood
 * Date: 7/26/19
 * Description: Function implementation
 * file for getAge and getName used in
 * calculating the standard deviation. 
 *
 ***********************************/

#include <iostream>
#include "Person.hpp"
using std::string;

/***********************************
 *            Person
 * Description: Default constructor
 * setting member data to empy values
 ***********************************/
Person::Person()
{
   string name = "empty";
   double age = 0.0;
}


/***********************************
 *            Person
 * Description: constructor initializing
 * data members name and age
 ***********************************/
Person::Person(string nameIn,  double ageIn)
{
    name = nameIn;
    age = ageIn;
}


/***********************************
 *            getName
 * Description: gets name returns function
 ***********************************/
string Person::getName()
{
    return name;
}


/***********************************
 *            getAge
 * Description: gets age to return functions
 ***********************************/
double Person::getAge()
{
    return age;
}
