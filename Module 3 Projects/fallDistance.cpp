/**************************************************
 ** Author: 	Ethan Atwood
 ** Date: 	7/9/19
 ** Description:Passes time into a function to
 ** return the distance at which an object falls
 ** in that amount of time
 **************************************************/

#include <iostream>
#include <cmath>


const double GRAVITY = 9.8; //constant variable for gravity

double fallDistance(double time); //Function header w/ time as the double type parameter

/*
int main ()
{

	double time = 3.2; // initilzing time to 3.2 seconds
	double distance = fallDistance(time); //calling function w/ time as argument
	
	std::cout << distance << std::endl; //test to get returned distance 
	return 0;
}
*/

/**********************************************
**
**          fallDistance
**  Description: this function is passed time
** and calculates and returns distance to int main
**
**********************************************/

double fallDistance(double falltime)
{
	//calculates and returns the distance to main
	return ((0.5) * GRAVITY * (pow(falltime, 2)));
 
}
