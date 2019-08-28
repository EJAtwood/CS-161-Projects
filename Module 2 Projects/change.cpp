/***************************************************************
** Author:	Ethan Atwood
** Date:	6/30/2019	
** Description:	This is my interpretation of asking the user
** for a cent amount less than 100 and having that cent amount
** be optimized to the fewest coins possible.
**
***************************************************************/

#include <iostream>
#include <cmath>


	/*Program will output fewest coins possible to achieve
	 the users input cent amount */
int main () {

	//define data type as int so there is no floating numbers
	int centsIn, numQuarter, numDime, numNickel, numPenny;
	//'Remain' variables calculate remainder to calculate next lowest denomination coinage
	int numQuarterRemain, numDimeRemain, numNickelRemain, numPennyRemain;

	//Ask the user for cents below 100 and store in centsIn 
	std::cout << "Please enter an amount in cents less than a dollar. " << std::endl;
	std::cin >> centsIn; //This displays the cent amount entered after hitting enter

	//comment stating what the optimized coinage will be
	std::cout << "Your change will be: " << std::endl;	

	//calc number of quarters and the remainder 
	numQuarter = centsIn / 25;
	numQuarterRemain = centsIn%25;

	std::cout << "Q: " << numQuarter << std::endl;

	//calc number of dimes and remainder
	numDime = numQuarterRemain / 10;
	numDimeRemain = numQuarterRemain%10;

	std::cout << "D: " << numDime << std::endl;

	//calc number of nickels and remainder
	numNickel = numDimeRemain / 5;
	numNickelRemain = numDimeRemain%5;

	std::cout << "N: " << numNickel << std::endl;

	//calc number of Pennys and remainder
	numPenny = numNickelRemain / 1;
	numPennyRemain = numNickelRemain%1;

	std::cout << "P: " << numPenny << std::endl;

	return 0;



}
