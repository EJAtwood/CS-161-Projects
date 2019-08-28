/**************************************************************
 * Author: Ethan Atwood
 * Date:8/8/2019
 * Description:Quadratic headerfile for Quadratic.cpp which 
 * includes the class description and the member functions and
 * variables for the Quadratic class. Cosntructors are also
 * included.
 *
 *************************************************************/
#ifndef QUADRATIC_HPP
#define QUADRATIC_HPP

class Quadratic
{
    private:
        double a;
        double b;
        double c;

    public: 
        Quadratic(); //default cosntructor
        Quadratic(double, double, double); //constructor to initialize to data members
        void setA(double);
        void setB(double);
        void setC(double);
        double valueFor(double);
        double numRealRoots();
                  

};
#endif
