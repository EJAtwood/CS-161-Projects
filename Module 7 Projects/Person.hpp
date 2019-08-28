/*********************************
 * Author: Ethan Atwood
 * Date: 7/25/19
 * Description: Person header file
 * for declaring Person Class and 
 * associated  member variables and
 * functions. 
 *
 ********************************/

#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>


class Person
{
    private:
       std::string name; //member variables
       double age;

    public:
        Person(); //default constructor
        Person(std::string, double);//overloaded constructor
        std:: string getName(); //simple get functions
        double getAge();   
        
};
#endif       
