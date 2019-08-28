/**************************************
 * Author: Ethan Atwood
 * Date:07/25/2019
 * Description: findMedian function takes
 * an entire array of data, sorts it, 
 * and calculates the median.
 *
 *************************************/

#include <iostream>
#include <algorithm>


/**************************************
 *             findMedian
 * Description: passes an entire array
 * into a function and calcualtes the 
 * median of the set of numbers.
 **************************************/
double findMedian (int number[], int arraySize)
{
    std::sort(number, number+arraySize); //sorts numbers in array in ascending order    

    if (arraySize % 2 == 0) // is the arraySize even?
    { 
        int n = 0.0; 
        n = (arraySize / 2.0);
        return (((double)number[n-1] +(double)number[n])/ 2);     
    }     

    else
    {
        int n = 0.0;
        n =(((double)arraySize + 1.0)/ 2.0); //when the arraySize is odd
        return(number[n-1]);        
    }    
}
