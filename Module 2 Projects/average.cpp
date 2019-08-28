/***************************************************************
**
** Author:		Ethan Atwood
** Date:		06/27/19
** Description:		Asks the user for four numbers and calculates
** the average of those four numbers.
**
***************************************************************/

#include <iostream>
#include <cmath>

//This program asks for four numbers, calculates, and outputs the average.
int main ()
 {

	//variable type as double for floating numbers
	//four numbers, sum, and average are needed variables for calculations 
	double num1, num2, num3, num4, sum, average;

	//Ask user for 4 numbers and store those numbers in variables
	std::cout << "Please enter four numbers." << std::endl;
	std::cin >> num1 >> num2 >> num3 >> num4; 

	//calculate sum of four numbers
	sum = num1+num2+num3+num4;

	//calculate average from sum
	average = sum/4;
	
	//output statement with average
	std::cout << "The average of those numbers is: " << std::endl;
	std::cout << average;

	return 0; 



} 
