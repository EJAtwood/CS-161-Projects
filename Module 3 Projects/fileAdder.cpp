/***************************************************
** Author: 	Ethan Atwood
** Date:	7/6/19
** Description:	This program reads in a user file name
** and if that file name exists it opens it. If it exists
** the sum of the numbers from that file are displayed on
** a separate .txt file called sum.txt.
**
***************************************************/


#include <iostream>
#include <fstream> //needed for fstring file operation
#include <string> 

int main () {

	std::string fileName;
	int num; 
	int sumOfNum;

	//ask and store filename from user
	std::cout << "Please enter your filename." << std::endl;
	std::cin >> fileName;

	//ifstream opens user defined filName
	std::ifstream inputFile; //defines object named inputFile
	inputFile.open(fileName);

	//if statement referencing inputfile and reading in numbers
	if (inputFile)
	{
	sumOfNum = 0;
	   while (inputFile >> num)
	   { 
	   sumOfNum += num; //summing numbers from .txt file
	   }

	   inputFile.close();
	   
 	   //only outputting this statement if fileName can be opene
	   std::cout <<"result written to sum.txt" << std::endl;	  
	} 

	else // if file not correct, cant access
	   {
	   std::cout <<"could not access file" << std::endl;
	   } 

	//writing sum to output file sum.txt
	std::ofstream outputFile;
	outputFile.open("sum.txt");

	outputFile << sumOfNum << std::endl;//printing sumOfNum to sum.txt
	
	outputFile.close();


	return 0;
	}


