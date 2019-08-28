/*************************************************************
**
** Author: 	Ethan Atwood
** Date:	7/4/19	
** Description:	Ths game asks the player for a number to guess,
**		 then the player guesses the number. Each time
**		the player guesses, feedback tells the player
**		wich direction to change the guess by. When the 
**		player guesses it right, it displays they have
**		guessed the right answer in x number of tries.
**
**************************************************************/


#include <iostream>
#include <string>

int main () {

	int numToGuess; //the number for the player to guess
	int guess; //stores guess from player
	int count;//counts the number of attemps

	std::cout << "Enter the number for the player to guess." << std::endl;
	std::cin >> numToGuess;	//asks the player for the number to guess

	count = 0; //initialize counter to start from 0
	
	std::cout << "Enter your guess." << std::endl; //enter first guess display outside of loop
		
	// do while loop first runs through each statment then checks the condition
	do {
	
	   std::cin >>  guess;
	   count ++; //increments tehe counter for number of guesses

	   //If player guess = right answer, this is true and "you guessed it" is displayed	
	   if (guess == numToGuess)
         	std::cout << "You guessed it in " << count << " tries." <<  std::endl;
	
	   //if the player guess is greater than the right answer, this is true and will display
	   if (guess > numToGuess)
		std::cout << "Too high - try again." << std::endl;

	   //if the player guess is less than tje right answer. this is true and will display 
	   if (guess < numToGuess)
		std::cout << "Too low - try again." << std::endl;
	 }
	
	while (guess != numToGuess); /* if the player guess does not match the "right' number to win the game
	this condition is true and it re-loops to the top. If this statement is false, after displaying the 
	appropriate output, it will end the loop/program*/	
	
	return 0;
	 }	
