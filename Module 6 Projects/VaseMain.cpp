#include <iostream>
#include "Vase.hpp"
#include "HalfOpenCylinder.hpp"
 

int main()
{   
    HalfOpenCylinder hoc1;
    Vase vase1(hoc1,0.12);
    std::cout << vase1.totalCost() << std::endl; 
   
    HalfOpenCylinder hoc2(80.4, 13);
    Vase vase2(hoc2, 0.2);
    
    std::cout << std::boolalpha << vase1.costsMoreThan(vase2) << std::endl; 
  
    //std::cout << hoc1.totalcost() << std::endl; 
      return 0;
}
