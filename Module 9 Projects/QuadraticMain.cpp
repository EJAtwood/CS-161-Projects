#include <iostream>
#include <vector>
#include "Quadratic.hpp"

double meanValueFor(std::vector<Quadratic*> vec, double);

int main()
{
    
    Quadratic q1; 
    Quadratic q2 (2, 10.0, 4.0);
    q1.setA(2);
    q1.setB(3);
    q1.setC(4);
    q1.valueFor(10);
    std::vector<Quadratic*> vec;
    vec.push_back(&q1);
    vec.push_back(&q2);
    double result = meanValueFor(vec, 2.0); 
    
    
    std::cout << result << std::endl;
 
    std::cout << q2.numRealRoots() << std::endl;
   
     return 0;
}
