/********************************************************
** Author: 	Ethan Atwood
** Date: 	7/29/19
** Description:	Calls the smallSort2 function by passing three
** int addresses.The pointers point to the 
** address location of three integers. The integers are 
** sorted/swapped into ascending order and displayed.
**
*********************************************************/

/*
#include <iostream>
 
void smallSort2(int *first, int *second, int *third);


int main()
{
    int first = 14;
    int second = -90;
    int third = 2;

    //three address parameters passed into the function
    smallSort2(&first, &second, &third);
   
    std::cout << "In main: "<<first << ", " << second << ", " << third
    << std::endl;
   
    std::cout << "In main after sort address" << &first <<" "<< &second <<" "<< &third << std::endl;
    return 0;
}
*/

/*********************************************************
**			smallSort2 Function
** Description: Three address locations are passed in as the 
** parameters. Below, *one, *two, and *three are pointers to
** those addresses. The function swaps the original values 
** passed in as the parameters, whos addresses are stored 
** in one, two, and three.
**********************************************************/
void smallSort2(int *one, int *two, int *three)
{
 
   int temp = 0; //initialize temp var to allow swapping

   //loop to swap neccesary numbers
   //*one, *two, and *three are all dereferenced to allow
   //us to get contents at address for appropriate swapping.
   while ((*one > *two) || (*two > *three) || (*one > *three))
   {
      if (*one > *two) //swap one and two if out of order
      {	
        temp = *one;
        *one = *two;
        *two = temp;
      }
      else if (*two > *three) //swap two and three if out of order
      {
        temp = *two;
        *two = *three;
        *three = temp;
      }
      else if (*one > *three) // swap one and three if out of order
      {
        temp = *one;
        *one = *three;
        *three = temp;
      }
   }

}  

