/********************************************************
** Author: 	Ethan Atwood
** Date: 	7/10/19
** Description:	Calls the smallSort function to arange numbers 
** in ascending order
**
*********************************************************/


#include <iostream>


//function header with reference paramaters 
void smallSort(int &first, int &second, int &third);

/*
int main()
{
   int first, second, third = 0;

   std::cout << "Please enter 3 Integers." << std::endl;
   std::cin >> first >> second >> third;

   smallSort(first, second, third);

   std::cout << first << ", " << second << ", " << third <<
   std::endl;

   return 0;
}
*/

/*********************************************************
**			smallSort Function
** Description:three arguments are passed into this function
**  by reference and they are sorted into ascending order.
**
**********************************************************/
void smallSort(int &one, int &two, int &three)
{

   int temp = 0; //initialize temp var to allow swapping

   //loop to go back and swap neccesary numbers
   while ((one > two) || (two > three) || (one > three)){
      if (one > two) //swap one and two
      {	
        temp = one;
        one = two;
        two = temp;
      }
      else if (two > three) //swap two and three
      {
        temp = two;
        two = three;
        three = temp;
      }
      else if (one > three) // swap one and three
      {
        temp = one;
        one = three;
        three = temp;
      }
   }
} 


