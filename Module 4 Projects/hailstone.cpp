/********************************************************
** Author:  Ethan Atwood
** Date:    7/10/19
** Description: Calls hailstone function to return number
** of times it takes to progress through the sequence
** to get back to one.
**
**********************************************************/


#include <iostream>

//has to be a return function, not void
int hailstone(int startInt);

/*
int main()
{
   int posInt = 0;
   int steps = 0;

   std::cout << "Please enter a positive Integer.\n";
   std::cin >> posInt;

   steps = hailstone(posInt);

   std::cout << steps << std::endl;

   return 0;

}
*/

/***********************************************************
**		         hailstone
** Description: hailstone takes the passed integer and if
** it's odd, times it by 3 + 1, and if it's even divides it
** by 2. It calculates how many times it takes to get to one.
**
*************************************************************/

int hailstone(int integer) //calls hailstone passing an integer in
{
   int counter = 0; //initialize counter

   while(integer != 1) //start loop, if int = 1, already at 1
   {
       if (integer % 2 == 0) //if even divide by 2
        {
            integer = integer / 2;
        }
       else
        {
            integer = integer * 3 + 1; //if odd times by 3 + 1
        }

        counter++; // increment
   }

   return counter;//returns counter number to steps from main
}








