/***********************************************************************
** Author: 	Ethan Atwood
** Date:	6/21/2019
** Description:	Asks the user for their favorite animal then prints out 
**		that that is their favorite animal.
***********************************************************************/

#include <iostream>
#include <string>

int main() 
{

	std::string faveAnimal;
	std::cout <<"Please enter your favorite animal."<< std::endl;
	std::cin >> faveAnimal;
	std::cout <<"Your favorite animal is the "<< faveAnimal;
	std::cout <<"."<< std::endl;

	return 0;

}
