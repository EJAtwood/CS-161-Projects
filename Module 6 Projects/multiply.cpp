/****************************************
 * Author: Ethan Atwood
 * Date: 07/20/2019
 * Description: multiply function takes
 * two integers and recursively adds them
 * to get the equivalent answer as 
 * multiplication.
 *
 ***************************************/

#include <iostream>

//int multiply(int x, int y); prototype declared in main


/***************************************
 *             multiply
 * Description: takes two integers by parameter
 * and recursively adds them which is the 
 * equivalency of multiplication.
 **************************************/
int multiply(int x, int y)
{
    if (y == 1)
        return x;
    else
        return x + multiply(x, (y-1)); 

}


/***************************************
 *              main
 *
 **************************************
int main()
{
   
    multiply(7,4); //passess 7,4 into multiply
    return 0;

}
*/
