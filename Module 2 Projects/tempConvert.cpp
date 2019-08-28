/****************************************************************** 
** Author:	Ethan Atwood>
** Date: 	6/30/2019
** Description: This program asks the user for a temperature in 
** Celsius and converts it to Fahrenheight.
**
******************************************************************/

#include <iostream> 

int main () {

	//define variable type as double/float 
	double cels;
	double far;

	//Ask the User to input the temp in Celsius
	std::cout << "Please enter a Celsius temperature. " << std::endl;
	std::cin >> cels;
	
	//Compute the Fahrenheight from Celsius
	far =(9.0/5.0) * cels + 32.0;  
	std::cout << "The equivalent Fahrenheit temperature is: " << std::endl;
	std::cout << far;
	
	return 0;

}
