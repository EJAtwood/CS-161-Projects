/*********************************************************
 * Author: Ethan Atwood
 * Date: 7/30/19      
 * Description: transformArray takes in as a parameter a
 * pointer by reference. Memory is then dynamically
 * allocated to a new array that is assigned to the address 
 * of the pointer that was passed as the parameter. Memory leaks
 * are accounted for where needed.
 *
 **********************************************************/

#include <iostream>
/*
void transformArray (int *&intArray ,int SIZE);

int main()
{
    int *myArray = new int[3];
    myArray[0] = 1;
    myArray[1] = 2;
    myArray[2] = 3;

    transformArray(myArray,3);

    std::cout << "Array from Main:" << std::endl;
    for (int i=0; i < 6; i++)
        std::cout << myArray[i] << std::endl;

    delete []myArray;

    return 0;
}
*/

/*********************************************************
 *                   transformArray Function
 * Description: transformArray takes in a pointer reference to 
 * the function with an array size. Dynamic memory is allocated 
 * to a new arrray large enough to hold the appropriate values. 
 * The data from the initial array is then passed into the new 
 * array. The new array then fills in the second half of the array
 * with a calcualtion that adds one to the existing array data.
 * The memory is cleared and set to null.
 *
 ********************************************************/
void transformArray(int *&transArray, int arraySize)
{
    
    int *newArray = new int[arraySize * 2]; // create new dynamic array with approp size


    for(int index = 0; index < arraySize; index++)//add in data from old array to new one
    { 
        //fills in the new array with data from the old array 
        newArray[index] = *(transArray + index); 

        //fills in rest of array with 1 added to each array data point
        newArray[arraySize + index] = *(transArray + index) + 1;
    }

    delete []transArray; //Array memory is cleared

    transArray = newArray; // old array is assigned to new array

    newArray = NULL; //the new array from this function is set back to NULL
                     // ready for next input
 
}

