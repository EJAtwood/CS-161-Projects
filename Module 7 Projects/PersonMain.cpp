#include <iostream>
#include "Person.hpp"
#include <string>

//Person is a class and classes are data types
//no need to add int or double in front of the class
double stdDev(Person number[], int arraySize);

int main()
{
    
    Person p1[3] = {Person("Jim", 5), Person("Ethan", 10), Person("Sam",15)}; //std = 4.082
   
    Person p2[4] = {Person("Jim", 5), Person("Ethan", 10), Person("Sam",15), Person("Jill", 30)}; // std = 9.35
    
    Person p3[1] = {Person("Harry", 25)}; //testing one value = 0
    
//Just another way of testing out the functions
//    Person p3("Sam", 15);
//    Person people[3] = {p1, p2, p3};   
//    result = stdDev(people, 3);   
    
    double result = 0;

    result = stdDev(p1, 3);
    std::cout << result <<  std::endl;
    
    result = stdDev(p2, 4);
    std::cout << result <<  std::endl;
   
    result = stdDev(p3, 1);
    std::cout << result <<  std::endl;

    

    return 0;
}
