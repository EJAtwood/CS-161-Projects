#include <iostream>


int main () {

	int userInteger; //number of integers user wants to inputr
	int number; //counter variable
	int userIntEnter; // user input for set of integers
	int maxNum; //used to assign max value from user
	int minNum; //used to assign min value from user
	
	//disaplys prompt for user
	std::cout << "How many integers would you like to enter?" <<
	std::endl;
	std::cin >> userInteger;
	
	//action for user
	std::cout << "Please enter " << userInteger << " integers." <<
	std::endl;
	
	//initialized these variables
	number = 1;//since i initialized at 1, number has to be <= userInteger
		  //I could have initalized at 0 and then number < userInteger
	maxNum = 0;
	minNum = 0;
	
	/*number is used as a counter variable. Each iteration goes up
   	 by one until it matches amount of userInteger which is the amount of integer
	the user wants to enter */ 
	while (number <= userInteger)
	{
	  std::cin >> userIntEnter; //gets integer in set of userIntegers and uses to test loop
	
	  /*number is equal to one means that the counter is at one and only one number has 
 	  been input by the user. This one number would be the min and max...since there is only one 
	  number entered so far */
	  if (number == 1) 
		maxNum = minNum = userIntEnter;

	  /*If the above if statement is false, then we move here. If the user entered integer 
 	  is greater than the variable maxNum (so true), then maxNum is assinged this user input value  */
	  if (userIntEnter > maxNum)
		maxNum = userIntEnter; 
	
	  /*If the above is false, then we move here. If the user entered integer is less than
 	   the assigned minNum, minNum is assinged this value  */
	  if (userIntEnter < minNum)
		minNum = userIntEnter;
	
	  number++; //adds 1 to variable number as a increment counter
	} 

	//we ouput the newly assinged variable with their respective asociation, ie min or max value	
	std::cout << "min: " << minNum << std::endl;
	std::cout << "max: " << maxNum << std::endl;

	return 0;
}

